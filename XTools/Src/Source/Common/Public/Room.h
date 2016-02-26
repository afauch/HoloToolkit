//////////////////////////////////////////////////////////////////////////
// Room.h
//
// Copyright (C) 2016 Microsoft Corp.  All Rights Reserved
//////////////////////////////////////////////////////////////////////////

#pragma once

XTOOLS_NAMESPACE_BEGIN

typedef ::XTools::int64 RoomID;

/// Represents a physical space or room in which a connected device resides.  
/// In general, if one device can see the other then they would be considered
/// to be in the same "Room"
class Room : public AtomicRefCounted
{
public:
	static const RoomID kInvalidRoomID = -1L;

	/// Returns the user-friendly name of the room
	virtual XStringPtr GetName() const = 0;

	/// Returns the unique ID of the room
	virtual RoomID GetID() const = 0;

	/// Returns the total number of users in the room
	virtual int32 GetUserCount() = 0;

	/// Returns the user at the given index in the room
	virtual UserID GetUserID(int32 userIndex) = 0;
};

DECLARE_PTR(Room)

XTOOLS_NAMESPACE_END
