/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4X3/include/IfcSanitaryTerminalTypeEnum.h"

// TYPE IfcSanitaryTerminalTypeEnum = ENUMERATION OF	(BATH	,BIDET	,CISTERN	,SANITARYFOUNTAIN	,SHOWER	,SINK	,TOILETPAN	,URINAL	,WASHHANDBASIN	,WCSEAT	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IFC4X3::IfcSanitaryTerminalTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSanitaryTerminalTypeEnum> copy_self( new IfcSanitaryTerminalTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IFC4X3::IfcSanitaryTerminalTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSANITARYTERMINALTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BATH:	stream << ".BATH."; break;
		case ENUM_BIDET:	stream << ".BIDET."; break;
		case ENUM_CISTERN:	stream << ".CISTERN."; break;
		case ENUM_SANITARYFOUNTAIN:	stream << ".SANITARYFOUNTAIN."; break;
		case ENUM_SHOWER:	stream << ".SHOWER."; break;
		case ENUM_SINK:	stream << ".SINK."; break;
		case ENUM_TOILETPAN:	stream << ".TOILETPAN."; break;
		case ENUM_URINAL:	stream << ".URINAL."; break;
		case ENUM_WASHHANDBASIN:	stream << ".WASHHANDBASIN."; break;
		case ENUM_WCSEAT:	stream << ".WCSEAT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IFC4X3::IfcSanitaryTerminalTypeEnum> IFC4X3::IfcSanitaryTerminalTypeEnum::createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream )
{
	if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcSanitaryTerminalTypeEnum>(); }
	if( arg.compare( "*" ) == 0 ) { return shared_ptr<IfcSanitaryTerminalTypeEnum>(); }
	shared_ptr<IfcSanitaryTerminalTypeEnum> type_object( new IfcSanitaryTerminalTypeEnum() );
	if( std_iequal( arg, ".BATH." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_BATH;
	}
	else if( std_iequal( arg, ".BIDET." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_BIDET;
	}
	else if( std_iequal( arg, ".CISTERN." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_CISTERN;
	}
	else if( std_iequal( arg, ".SANITARYFOUNTAIN." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_SANITARYFOUNTAIN;
	}
	else if( std_iequal( arg, ".SHOWER." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_SHOWER;
	}
	else if( std_iequal( arg, ".SINK." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_SINK;
	}
	else if( std_iequal( arg, ".TOILETPAN." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_TOILETPAN;
	}
	else if( std_iequal( arg, ".URINAL." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_URINAL;
	}
	else if( std_iequal( arg, ".WASHHANDBASIN." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_WASHHANDBASIN;
	}
	else if( std_iequal( arg, ".WCSEAT." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_WCSEAT;
	}
	else if( std_iequal( arg, ".USERDEFINED." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, ".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcSanitaryTerminalTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}