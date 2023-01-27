/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

namespace IFC4X3
{
	// TYPE IfcHeatExchangerTypeEnum = ENUMERATION OF	(PLATE	,SHELLANDTUBE	,TURNOUTHEATING	,USERDEFINED	,NOTDEFINED);
	class IFCQUERY_EXPORT IfcHeatExchangerTypeEnum : virtual public BuildingObject
	{
	public:
		enum IfcHeatExchangerTypeEnumEnum
		{
			ENUM_PLATE,
			ENUM_SHELLANDTUBE,
			ENUM_TURNOUTHEATING,
			ENUM_USERDEFINED,
			ENUM_NOTDEFINED
		};

		IfcHeatExchangerTypeEnum() = default;
		IfcHeatExchangerTypeEnum( IfcHeatExchangerTypeEnumEnum e ) { m_enum = e; }
		virtual uint32_t classID() const { return 1007984134; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcHeatExchangerTypeEnum> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		IfcHeatExchangerTypeEnumEnum m_enum;
	};
}
