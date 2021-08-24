#ifndef IDataBaseModule_h__
#define IDataBaseModule_h__


#include <string>
#include "IDataBaseModel.h"

class  IDataBaseModule
{
public:
	virtual ~IDataBaseModule(){}
/**
	 * @fn       GetName
	 * @author   Crack
	 * @brief    获取模块名称
	 * @date     2021/4/11 22:10
	 * @param    
	 * @return   
	*/
	virtual std::string GetName() const  = 0;

	/**
	 * @fn       GetCompany
	 * @author   Crack
	 * @brief    获取公司名称
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetCompany() const  = 0;
	/**
	 * @fn       GetVersion
	 * @author   Crack
	 * @brief     获取版本号
	 * @date     2021/7/29 9:57
	 * @param
	 * @return
	*/
	virtual std::string GetVersion() const  = 0;
	/**
	 * @fn       GetDescription
	 * @author   Crack
	 * @brief    描述信息
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual std::string GetDescription() const = 0;
	/**
	 * @fn       Initialise
	 * @author   Crack
	 * @brief    初始化
	 * @date     2021/7/29 9:58
	 * @param
	 * @return
	*/
	virtual bool Initialise() = 0;
	/**
	 * @fn       Uninitialise
	 * @author   Crack
	 * @brief    卸载信息
	 * @date     2021/7/29 9:59
	 * @param
	 * @return
	*/
	virtual bool Uninitialise() = 0;

	/**
	 * @fn       SetDBAbsolutePath
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 14:38
	 * @param    
	 * @return   
	*/
	virtual void SetDBAbsolutePath(const std::string &strDBPath) = 0;

	/**
	 * @fn       OpenDB
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 14:41
	 * @param    
	 * @return   
	*/
	virtual bool OpenDB(std::string strDBPath = "") = 0;

	/**
	 * @fn       GetDataBaseModel
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/24 14:56
	 * @param    
	 * @return   
	*/
	virtual IDataBaseModel& GetDataBaseModel() = 0;
};
#endif // IDataBaseModule_h__