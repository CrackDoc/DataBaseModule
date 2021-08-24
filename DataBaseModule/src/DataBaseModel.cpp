#include "DataBaseModel.h"
CDataBaseModel::CDataBaseModel()
	:m_pDataBase(nullptr)
{
	
}

CDataBaseModel::~CDataBaseModel()
{

}

std::string CDataBaseModel::Serialization()
{
	return "";
}

IDataBaseModel& CDataBaseModel::DeSerialization(const std::string& strIDataBaseModel)
{
	return *this;
}

ITableModel& CDataBaseModel::GetCICDModel()
{
	return m_ICDModel;
}

ITableModel& CDataBaseModel::GetCAutoSwitchModel()
{
	return m_AutoSwichModel;
}

ITableModel& CDataBaseModel::GetCCaseModel()
{
	return m_CaseMdoel;
}

ITableModel& CDataBaseModel::GetCSetCaseModel()
{
	return m_SetCaseModel;
}

ITableModel& CDataBaseModel::GetCStepCaseModel()
{
	return m_StepCaseModel;
}

ITableModel& CDataBaseModel::GetCVariableModel()
{
	return m_VariableModel;
}

ITableModel& CDataBaseModel::GetCVarMappingModel()
{
	return m_VarMapppingModel;
}
QSqlDatabase* CDataBaseModel::GetDataBase()
{
	return m_pDataBase;
}

void CDataBaseModel::SetDataBase(QSqlDatabase* db)
{
	m_pDataBase = db;
}
