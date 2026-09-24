using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventMagicOrderRwd : ProtoBaseProxy<EventMagicOrderRwd>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int Diff;

		public int ExtraNum;

		public static readonly FieldCodec<int> _repeated_extraPool_codec;

		public readonly RepeatedField<int> ExtraPool;

		public static readonly FieldCodec<int> _repeated_extraWeight_codec;

		public readonly RepeatedField<int> ExtraWeight;

		public static readonly FieldCodec<int> _repeated_outputsFixed_codec;

		public readonly RepeatedField<int> OutputsFixed;

		public static readonly FieldCodec<int> _repeated_outputsFixedTime_codec;

		public readonly RepeatedField<int> OutputsFixedTime;

		public static readonly FieldCodec<int> _repeated_rwdActDiffRange_codec;

		public readonly RepeatedField<int> RwdActDiffRange;

		public int RwdLimitCount;

		public int XXX_RowIdentifier { get; set; }

		public EventMagicOrderRwd()
		{
		}

		public EventMagicOrderRwd(EventMagicOrderRwd other)
		{
		}

		public override EventMagicOrderRwd Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
