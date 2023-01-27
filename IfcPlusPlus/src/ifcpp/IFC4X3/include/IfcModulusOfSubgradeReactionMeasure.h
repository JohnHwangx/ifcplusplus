/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcDerivedMeasureValue.h"
#include "IfcModulusOfSubgradeReactionSelect.h"

namespace IFC4X3
{
	// TYPE IfcModulusOfSubgradeReactionMeasure = REAL;
	class IFCQUERY_EXPORT IfcModulusOfSubgradeReactionMeasure : public IfcDerivedMeasureValue, public IfcModulusOfSubgradeReactionSelect
	{
	public:
		IfcModulusOfSubgradeReactionMeasure() = default;
		IfcModulusOfSubgradeReactionMeasure( double value );
		virtual uint32_t classID() const { return 1753493141; }
		virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
		static shared_ptr<IfcModulusOfSubgradeReactionMeasure> createObjectFromSTEP( const std::string& arg, const std::map<int,shared_ptr<BuildingEntity> >& map, std::stringstream& errorStream );
		double m_value;
	};
}
