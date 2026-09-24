using System;

namespace Framework.Core.Services.Backend.Remote.Payloads.BoardState
{
	[Serializable]
	public class EventData
	{
		public int XP;

		public int Level;

		public string EventId;
	}
}
