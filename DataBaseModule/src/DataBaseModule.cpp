#include "DataBaseModule.h"
#include "DataBaseModel.h"
#include <QFileInfo>
#include <QtCore/QCoreApplication>
#include <QFile>
#include <QtSql/QSqlDatabase>

CDataBaseModule::CDataBaseModule(QObject *parent)
    : QObject(parent)
	, m_pModel(new CDataBaseModel)
{

}
CDataBaseModule::~CDataBaseModule()
{
	
}
std::string CDataBaseModule::GetName() const
{
	return "";
}

std::string CDataBaseModule::GetCompany() const
{
	return "";
}

std::string CDataBaseModule::GetVersion() const
{
	return "";
}

std::string CDataBaseModule::GetDescription() const
{
	return "";
}

bool CDataBaseModule::Initialise()
{
	return true;
}

bool CDataBaseModule::Uninitialise()
{
	return true;
}
IMPLEMENT_MODULE(DataBase)

void CDataBaseModule::SetDBAbsolutePath(const std::string& strDBPath)
{
	m_strDBPath = QString::fromLocal8Bit(strDBPath.c_str());
}
bool CDataBaseModule::OpenDB(std::string strDBPath)
{
	if (!strDBPath.empty())
	{
		m_strDBPath = QString::fromLocal8Bit(strDBPath.c_str());
	}
	if (m_strDBPath.isEmpty())
	{
		m_strDBPath = QCoreApplication::applicationDirPath() + "/IntegrateCases.db";
	}
	QFileInfo info(m_strDBPath);
	if (!info.exists())
	{
		QFile::copy(":/IntegrateCases.db", m_strDBPath);
	}
	m_pDB = &QSqlDatabase::addDatabase("SQLITE");
	m_pDB->setDatabaseName(m_strDBPath);
	if (!m_pDB->open())
	{
		return false;
	}
	m_pModel->SetDataBase(m_pDB);
	return true;
}

IDataBaseModel& CDataBaseModule::GetDataBaseModel()
{
	return *m_pModel;
}
