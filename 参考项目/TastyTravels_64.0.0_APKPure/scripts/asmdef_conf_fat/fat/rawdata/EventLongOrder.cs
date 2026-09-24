using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventLongOrder : ProtoBaseProxy<EventLongOrder>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BoardId;

		public int ConvertTheme;

		public string Deadline;

		public int Detail;

		public int EndTheme;

		public int EventTheme;

		public static readonly MapField<int, string>.Codec _map_expireItem_codec;

		public readonly MapField<int, string> ExpireItem;

		public string OrderPrefab;

		public string OrderTime;

		public int RandomId;

		public int SpawnerId;

		public int XXX_RowIdentifier { get; set; }

		public EventLongOrder()
		{
		}

		public EventLongOrder(EventLongOrder other)
		{
		}

		public override EventLongOrder Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
