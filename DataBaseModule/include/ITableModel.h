#ifndef ITableModel_h__
#define ITableModel_h__

#include <string>
class  ITableModel
{
public:
	virtual ~ITableModel() {}
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
	virtual ITableModel& DeSerialization(const std::string& strIDataBaseModel) = 0;
};
class CICDModel :public ITableModel
{
public:
	CICDModel() {}
	~CICDModel() {}
	// ICD 的成员变量
public:
	std::string		strUuid;
	unsigned int	nByte_ExternalOffset;
	unsigned int	nByte_InnerOffset;
	unsigned int	nBit_Length;
	std::string		strSignal_Name;
	std::string 	strSignal_ID;
	std::string 	strData_Type;
	std::string 	strPhysical_Range;
	std::string 	strUnit;
	std::string 	strFormula;
	std::string 	strPolarity;
	std::string 	strPolarity_Value;
	std::string 	strInitial;
	std::string 	strComment;
	std::string 	strGroup;
	std::string 	strDuty;
	std::string 	strSignal_Source;
	std::string 	strSource_Type;
	unsigned int	nSource_InnerOffset;
	std::string		strSignal_Comment;
public:
	/**
	 * @fn       Serialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:15
	 * @param    
	 * @return   
	*/
	virtual std::string Serialization() { return ""; }
	/**
	 * @fn       DeSerialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:17
	 * @param    
	 * @return   
	*/
	virtual ITableModel& DeSerialization(const std::string& strIDataBaseModel) { return *this; }

};
class CAutoSwitchModel :public ITableModel
{
public:
	CAutoSwitchModel() {}
	~CAutoSwitchModel() {}
public:
	std::string strUuid;
	std::string strSW_Name;
	std::string strSW_Value;
public:
	/**
	 * @fn       Serialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:15
	 * @param    
	 * @return   
	*/
	virtual std::string Serialization() { return ""; }
	/**
	 * @fn       DeSerialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:17
	 * @param    
	 * @return   
	*/
	virtual ITableModel& DeSerialization(const std::string& strIDataBaseModel) { return *this; }

};
class CCaseModel :public ITableModel
{
public:
	CCaseModel() {}
	~CCaseModel() {}
public:
	std::string strUuid;
	std::string strCase_Name;
	std::string strCase_CreateTime;
	std::string strCase_UpdateTime;
	std::string strCase_Log;
	std::string strCase_Description;
	std::string strCset_Uuid;
public:
	/**
	 * @fn       Serialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:15
	 * @param    
	 * @return   
	*/
	virtual std::string Serialization() { return ""; }
	/**
	 * @fn       DeSerialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:17
	 * @param    
	 * @return   
	*/
	virtual ITableModel& DeSerialization(const std::string& strIDataBaseModel) { return *this; }

};
class CSetCaseModel :public ITableModel
{
public:
	CSetCaseModel() {}
	~CSetCaseModel() {}
public:
	std::string strUuid;
	std::string strCSet_Name;
	std::string strCSet_CreateTime;
	std::string strCSet_UpdateTime;
	std::string strCSet_Log;
	std::string strCSet_Description;
public:
	/**
	 * @fn       Serialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:15
	 * @param    
	 * @return   
	*/
	virtual std::string Serialization() { return ""; }
	/**
	 * @fn       DeSerialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:17
	 * @param    
	 * @return   
	*/
	virtual ITableModel& DeSerialization(const std::string& strIDataBaseModel) { return *this; }
};
class CStepCaseModel :public ITableModel
{
public:
	CStepCaseModel() {}
	~CStepCaseModel() {}
public:
	std::string		strUuid;
	unsigned int	nStep;
	unsigned int	b_nIO;
	std::string		strSignal_ID;
	std::string		strStep_Name;
	std::string		strStep_Value;
	std::string		strStep_Comment;
public:
	/**
	 * @fn       Serialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:15
	 * @param    
	 * @return   
	*/
	virtual std::string Serialization() { return ""; }
	/**
	 * @fn       DeSerialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:17
	 * @param    
	 * @return   
	*/
	virtual ITableModel& DeSerialization(const std::string& strIDataBaseModel) { return *this; }

};
class CVariableModel :public ITableModel
{
public:
	CVariableModel() {}
	~CVariableModel() {}
public:
	std::string strUuid;
	std::string strVar_Name;
	std::string strVar_Type;
	std::string strVar_Comment;
public:
	/**
	 * @fn       Serialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:15
	 * @param    
	 * @return   
	*/
	virtual std::string Serialization() { return ""; }
	/**
	 * @fn       DeSerialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:17
	 * @param    
	 * @return   
	*/
	virtual ITableModel& DeSerialization(const std::string& strIDataBaseModel) { return *this; }

};
class CVarMappingModel :public ITableModel
{
public:
	CVarMappingModel() {}
	~CVarMappingModel() {}
public:
	std::string strUuid;
	std::string strVar_Name;
	std::string strVar_Type;
	std::string strVar_Comment;
	std::string strVar_Uuid;
public:
	/**
	 * @fn       Serialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:15
	 * @param    
	 * @return   
	*/
	virtual std::string Serialization() { return ""; }
	/**
	 * @fn       DeSerialization()
	 * @author   Crack
	 * @brief       
	 * @date     2021/8/23 18:17
	 * @param    
	 * @return   
	*/
	virtual ITableModel& DeSerialization(const std::string& strIDataBaseModel) { return *this; }
};
#endif // ITableModel_h__
