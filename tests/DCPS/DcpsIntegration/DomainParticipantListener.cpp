// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1014

#include "DomainParticipantListener.h"

// Implementation skeleton constructor
OPENDDS_DCPS_DomainParticipantListener_i::OPENDDS_DCPS_DomainParticipantListener_i (void)
  {
  }

// Implementation skeleton destructor
OPENDDS_DCPS_DomainParticipantListener_i::~OPENDDS_DCPS_DomainParticipantListener_i (void)
  {
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_inconsistent_topic (
    ::DDS::Topic_ptr ,
    const ::DDS::InconsistentTopicStatus &
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_data_on_readers (
    ::DDS::Subscriber_ptr
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_offered_deadline_missed (
    ::DDS::DataWriter_ptr ,
    const ::DDS::OfferedDeadlineMissedStatus &
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_offered_incompatible_qos (
    ::DDS::DataWriter_ptr,
    const ::DDS::OfferedIncompatibleQosStatus &
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_liveliness_lost (
    ::DDS::DataWriter_ptr ,
    const ::DDS::LivelinessLostStatus &
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_publication_matched (
    ::DDS::DataWriter_ptr ,
    const ::DDS::PublicationMatchedStatus &
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_requested_deadline_missed (
    ::DDS::DataReader_ptr ,
    const ::DDS::RequestedDeadlineMissedStatus &
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_requested_incompatible_qos (
    ::DDS::DataReader_ptr ,
    const ::DDS::RequestedIncompatibleQosStatus &
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_sample_rejected (
    ::DDS::DataReader_ptr ,
    const ::DDS::SampleRejectedStatus &
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_liveliness_changed (
    ::DDS::DataReader_ptr ,
    const ::DDS::LivelinessChangedStatus &
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_data_available (
    ::DDS::DataReader_ptr
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_subscription_matched (
    ::DDS::DataReader_ptr ,
    const ::DDS::SubscriptionMatchedStatus &
  )
  {
    // Add your implementation here
  }

void OPENDDS_DCPS_DomainParticipantListener_i::on_sample_lost (
    ::DDS::DataReader_ptr ,
    const ::DDS::SampleLostStatus &
  )
  {
    // Add your implementation here
  }

