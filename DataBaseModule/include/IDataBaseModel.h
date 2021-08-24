#ifndef IDataBaseModel_h__
#define IDataBaseModel_h__

#include <string>
#include "ITableModel.h"
#include <list>

class QSqlDatabase;
class  IDataBaseModel
{
public:
	virtual ~IDataBaseModel(){}
	/**
	 * @fn       Serialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:15
	 * @param    
	 * @return   
	*/
	virtual std::string Serialization() = 0;
	/**
	 * @fn       DeSerialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:17
	 * @param    
	 * @return   
	*/
	virtual IDataBaseModel& DeSerialization(const std::string& strIDataBaseModel) = 0;

	/**
	 * @fn       GetCICDModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 13:51
	 * @param    
	 * @return   
	*/
	virtual ITableModel& GetCICDModel() = 0;

	/**
	 * @fn       GetCAutoSwitchModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 13:52
	 * @param    
	 * @return   
	*/

	virtual ITableModel& GetCAutoSwitchModel() = 0;

	/**
	 * @fn       GetCCaseModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 13:53
	 * @param    
	 * @return   
	*/

	virtual ITableModel& GetCCaseModel() = 0;
	/**
	 * @fn       GetCSetCaseModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 13:56
	 * @param    
	 * @return   
	*/
	virtual ITableModel& GetCSetCaseModel() = 0;

	/**
	 * @fn       GetCStepCaseModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 14:03
	 * @param    
	 * @return   
	*/
	virtual ITableModel& GetCStepCaseModel() = 0;

	/**
	 * @fn       GetCVariableModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 14:04
	 * @param    
	 * @return   
	*/
	virtual ITableModel& GetCVariableModel() = 0;

	/**
	 * @fn       GetCVarMappingModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 14:05
	 * @param    
	 * @return   
	*/
	virtual ITableModel& GetCVarMappingModel() = 0;

	/**
	 * @fn       GetDataBase;
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 15:16
	 * @param    
	 * @return   
	*/
	virtual QSqlDatabase* GetDataBase() = 0;
	/**
 	* @fn       SetDataBase;
 	* @author   Crack
 	* @brief       
 	* @date     2021/8/24 15:16
 	* @param    
 	* @return   
	*/
	virtual void SetDataBase(QSqlDatabase *db) = 0;
	/**
 	* @fn       SetSQL
 	* @author   Crack
 	* @brief       
 	* @date     2021/8/24 17:26
 	* @param    
 	* @return   
	*/
	virtual bool SetSQL(bool bRead,ITableModel& tModel, const std::string& strSQL) = 0;
	/**
 	* @fn       SetSQL
 	* @author   Crack
 	* @brief       
 	* @date     2021/8/24 17:26
 	* @param    
 	* @return   
	*/
	virtual bool SetSQL(bool bRead, std::list<ITableModel*>& lModel, const std::string& strSQL) = 0;
};
#endif // IDataBaseModel_h__
