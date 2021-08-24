#ifndef DataBaseModule_h__
#define DataBaseModule_h__


#include <QObject>
#include "IDataBaseModule.h"
#include "PublicMarco.h"

class IDataBaseModel;
class QSqlDatabase;

class CDataBaseModule : public QObject,public IDataBaseModule
{
    Q_OBJECT

public:
    CDataBaseModule(QObject *parent = Q_NULLPTR);
	~CDataBaseModule();
public:
	/**
	* @fn       GetName
	* @author   Crack
	* @brief    获取模块名称
	* @date     2021/4/11 22:10
	* @param
	* @return
	*/
    virtual std::string GetName() const;
	/**
	 * @fn       GetCompany
	 * @author   Crack
	 * @brief    获取公司名称
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetCompany() const;
	/**
	 * @fn       GetVersion
	 * @author   Crack
	 * @brief     获取版本号
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetVersion() const;
	/**
	 * @fn       GetDescription
	 * @author   Crack
	 * @brief    描述信息
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual std::string GetDescription() const;
	/**
	 * @fn       Initialise
	 * @author   Crack
	 * @brief    初始化
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual bool Initialise();
	/**
	 * @fn       Uninitialise
	 * @author   Crack
	 * @brief    卸载信息
	 * @date     2021/7/29 9:59
	 * @param
	 * @return
	*/
	virtual bool Uninitialise();
	/**
 	* @fn       SetDBAbsolutePath
 	* @author   Crack
 	* @brief       
 	* @date     2021/8/24 14:38
 	* @param    
 	* @return   
	*/
	virtual void SetDBAbsolutePath(const std::string& strDBPath);

	/**
	 * @fn       OpenDB
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 14:41
	 * @param    
	 * @return   
	*/
	virtual bool OpenDB(std::string strDBPath = "");
	/**
 	* @fn       GetDataBaseModel
 	* @author   Crack
 	* @brief       
 	* @date     2021/8/24 14:56
 	* @param    
 	* @return   
	*/
	virtual IDataBaseModel& GetDataBaseModel();
private:
	IDataBaseModel* m_pModel;
	QSqlDatabase*  m_pDB;
	QString m_strDBPath;
};
DECLARE_MODULE(DataBase, extern)
#endif // DataBaseModule_h__