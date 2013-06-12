/**
 * Copyright - See the COPYRIGHT that is included with this distribution.
 * EPICS pvData is distributed subject to a Software License Agreement found
 * in file LICENSE that is included with this distribution.
 */
/**
 * @author mrk
 */

#ifndef DBARRAY_H
#define DBARRAY_H

#include <string>
#include <cstring>
#include <stdexcept>
#include <memory>

#include <dbAccess.h>

#include <pv/pvIntrospect.h>
#include <pv/pvData.h>
#include <pv/pvAccess.h>

namespace epics { namespace pvaSrv { 

class dbArrayCreate {
public:
    POINTER_DEFINITIONS(dbArrayCreate);
    epics::pvData::PVByteArrayPtr createByteArray(
        epics::pvData::PVStructurePtr const & parent,
        epics::pvData::ScalarArrayConstPtr const & scalar,
        DbAddr &dbAddr,bool shareData);
    epics::pvData::PVUByteArrayPtr createUByteArray(
        epics::pvData::PVStructurePtr const & parent,
        epics::pvData::ScalarArrayConstPtr const & scalar,
        DbAddr &dbAddr,bool shareData);
    epics::pvData::PVShortArrayPtr createShortArray(
        epics::pvData::PVStructurePtr const & parent,
        epics::pvData::ScalarArrayConstPtr const & scalar,
        DbAddr &dbAddr,bool shareData);
    epics::pvData::PVUShortArrayPtr createUShortArray(
        epics::pvData::PVStructurePtr const & parent,
        epics::pvData::ScalarArrayConstPtr const & scalar,
        DbAddr &dbAddr,bool shareData);
    epics::pvData::PVIntArrayPtr createIntArray(
        epics::pvData::PVStructurePtr const & parent,
        epics::pvData::ScalarArrayConstPtr const & scalar,
        DbAddr &dbAddr,bool shareData);
    epics::pvData::PVUIntArrayPtr createUIntArray(
        epics::pvData::PVStructurePtr const & parent,
        epics::pvData::ScalarArrayConstPtr const & scalar,
        DbAddr &dbAddr,bool shareData);
    epics::pvData::PVFloatArrayPtr createFloatArray(
        epics::pvData::PVStructurePtr const & parent,
        epics::pvData::ScalarArrayConstPtr const & scalar,
        DbAddr &dbAddr,bool shareData);
    epics::pvData::PVDoubleArrayPtr createDoubleArray(
        epics::pvData::PVStructurePtr const & parent,
        epics::pvData::ScalarArrayConstPtr const & scalar,
        DbAddr &dbAddr,bool shareData);
    // Note that V3StringArray can not share
    epics::pvData::PVStringArrayPtr createStringArray(
        epics::pvData::PVStructurePtr const & parent,
        epics::pvData::ScalarArrayConstPtr const & scalar,
        DbAddr &dbAddr);
};

typedef std::tr1::shared_ptr<dbArrayCreate> dbArrayCreatePtr;

extern dbArrayCreatePtr getDbValueArrayCreate();

}}

#endif  /* DBARRAY_H */
