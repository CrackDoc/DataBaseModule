#include "UnitCMake_Project.h"
#include "DataBaseModule.h"
#include <QtSql/QSqlDatabase>
BEGIN_IMPLEMENT_TEST(UnitCMake_Project)
ADD_TEST_FUNCTION(Test)
END_IMPLEMENT_TEST()

UnitCMake_Project::UnitCMake_Project(void)
{

}
UnitCMake_Project::~UnitCMake_Project(void)
{

}

void UnitCMake_Project::Test()
{
	UNIT_TEST_ASSERT(GetOrCreateDataBaseModule()->OpenDB());
	IDataBaseModel& DBModel = GetOrCreateDataBaseModule()->GetDataBaseModel();
	ITableModel &ICDModel = DBModel.GetCICDModel();
	QSqlDatabase* db = DBModel.GetDataBase();
	db->transaction();
		DBModel.SetSQL(ICDModel,"");
	db->commit();
}
