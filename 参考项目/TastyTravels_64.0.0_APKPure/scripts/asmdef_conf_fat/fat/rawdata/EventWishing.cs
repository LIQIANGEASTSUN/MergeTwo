using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventWishing : ProtoBaseProxy<EventWishing>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int DeadLine;

		public int DefaultOutput;

		public static readonly FieldCodec<int> _repeated_diffRange_codec;

		public readonly RepeatedField<int> DiffRange;

		public int EventTheme;

		public int EventTime;

		public bool IsNewCycle;

		public string OrderTheme;

		public static readonly MapField<int, int>.Codec _map_randomerId_codec;

		public readonly MapField<int, int> RandomerId;

		public int XXX_RowIdentifier { get; set; }

		public EventWishing()
		{
		}

		public EventWishing(EventWishing other)
		{
		}

		public override EventWishing Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
