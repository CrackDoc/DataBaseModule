#ifndef DataBaseModel_h__
#define DataBaseModel_h__

#include "IDataBaseModel.h"

class CDataBaseModel :public IDataBaseModel
{
public:
	 CDataBaseModel();
	~CDataBaseModel();
	/**
	 * @fn       Serialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:15
	 * @param    
	 * @return   
	*/
	virtual std::string Serialization();
	/**
	 * @fn       DeSerialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:17
	 * @param    
	 * @return   
	*/
	virtual IDataBaseModel& DeSerialization(const std::string& strIDataBaseModel);

	/**
 	* @fn       GetCICDModel
 	* @author   Crack
 	* @brief       
 	* @date     2021/8/24 13:51
 	* @param    
 	* @return   
	*/
	virtual ITableModel& GetCICDModel();

	/**
	 * @fn       GetCAutoSwitchModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 13:52
	 * @param    
	 * @return   
	*/

	virtual ITableModel& GetCAutoSwitchModel();

	/**
	 * @fn       GetCCaseModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 13:53
	 * @param    
	 * @return   
	*/

	virtual ITableModel& GetCCaseModel();
	/**
	 * @fn       GetCSetCaseModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 13:56
	 * @param    
	 * @return   
	*/
	virtual ITableModel& GetCSetCaseModel();

	/**
	 * @fn       GetCStepCaseModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 14:03
	 * @param    
	 * @return   
	*/
	virtual ITableModel& GetCStepCaseModel();

	/**
	 * @fn       GetCVariableModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 14:04
	 * @param    
	 * @return   
	*/
	virtual ITableModel& GetCVariableModel();

	/**
	 * @fn       GetCVarMappingModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 14:05
	 * @param    
	 * @return   
	*/
	virtual ITableModel& GetCVarMappingModel();

	/**
 	* @fn       GetDataBase;
 	* @author   Crack
	 * @brief       
 	* @date     2021/8/24 15:16
 	* @param    
 	* @return   
	*/
	virtual QSqlDatabase* GetDataBase();
	/**
 	* @fn       SetDataBase;
 	* @author   Crack
 	* @brief       
 	* @date     2021/8/24 15:16
 	* @param    
 	* @return   
	*/
	virtual void SetDataBase(QSqlDatabase* db);
private:
	CICDModel m_ICDModel;
	CAutoSwitchModel m_AutoSwichModel;
	CCaseModel m_CaseMdoel;
	CSetCaseModel m_SetCaseModel;
	CStepCaseModel m_StepCaseModel;
	CVariableModel m_VariableModel;
	CVarMappingModel m_VarMapppingModel;
	QSqlDatabase* m_pDataBase;
};
#endif // DataBaseModel_h__