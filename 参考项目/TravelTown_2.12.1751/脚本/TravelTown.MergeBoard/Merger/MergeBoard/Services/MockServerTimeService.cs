using System;
using Framework.Core.Services.ServerTime;

namespace Merger.MergeBoard.Services
{
	public class MockServerTimeService : IServerTimeService
	{
		[NonSerialized]
		public long _currentServerTime;

		[NonSerialized]
		public float _lastUpdateTime;

		public long ServerTimeInMilliSeconds => 0L;

		public DateTime ServerDateTime => default(DateTime);
	}
}
