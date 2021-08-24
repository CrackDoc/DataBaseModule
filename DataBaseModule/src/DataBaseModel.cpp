#include "DataBaseModel.h"
#include <QSqlQuery>
#include <QSqlError>
CDataBaseModel::CDataBaseModel()
	:m_pDataBase(nullptr)
{
	
}

CDataBaseModel::~CDataBaseModel()
{
	if (m_pQuery != nullptr)
	{
		delete m_pQuery;
		m_pQuery = nullptr;
	}
	if (m_pDataBase != nullptr)
	{
		delete m_pDataBase;
		m_pDataBase = nullptr;
	}
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
	m_pQuery = new QSqlQuery(*m_pDataBase);
}
#include <QDebug>
bool CDataBaseModel::SetSQL(bool bRead, ITableModel& tModel, const std::string& strSQL)
{
	if (dynamic_cast<CICDModel*>(&tModel))
	{
		CICDModel* pCICDModel = dynamic_cast<CICDModel*>(&tModel);
		m_pQuery->exec(QString::fromLocal8Bit(strSQL.c_str()));
		// 执行的语句包括增删改查
		//执行结果放在 pCICDModel数据结构中
		qDebug() << m_pQuery->lastError().text();
		// 进行根据内存操作
		if (bRead)
		{

		}
	}
	else if (dynamic_cast<CAutoSwitchModel*>(&tModel))
	{

	}
	else if (dynamic_cast<CCaseModel*>(&tModel))
	{

	}
	else if (dynamic_cast<CSetCaseModel*>(&tModel))
	{

	}
	else if (dynamic_cast<CStepCaseModel*>(&tModel))
	{

	}
	else if (dynamic_cast<CVariableModel*>(&tModel))
	{

	}
	else if (dynamic_cast<CVarMappingModel*>(&tModel))
	{

	}
	else 
	{
		return false;
	}
	return true;
}
// 集合数据读和写操作
bool CDataBaseModel::SetSQL(bool bRead, std::list<ITableModel*>& lModel, const std::string& strSQL)
{
	// 1 集合数据获取
	// 2 集合数据写入数据库
	// 3 结合数据
	return true;
}
