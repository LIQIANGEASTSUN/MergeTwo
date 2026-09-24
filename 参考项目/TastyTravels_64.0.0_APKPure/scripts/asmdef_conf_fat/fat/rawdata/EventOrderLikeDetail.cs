using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class EventOrderLikeDetail : ProtoBaseProxy<EventOrderLikeDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly FieldCodec<string> _repeated_numInfo_codec;

		public readonly RepeatedField<string> NumInfo;

		public int Progress;

		public static readonly FieldCodec<int> _repeated_rwdActDiffRange_codec;

		public readonly RepeatedField<int> RwdActDiffRange;

		public int RwdLimitCount;

		public static readonly FieldCodec<string> _repeated_scoreInfo_codec;

		public readonly RepeatedField<string> ScoreInfo;

		public static readonly FieldCodec<int> _repeated_scoreTips_codec;

		public readonly RepeatedField<int> ScoreTips;

		public int XXX_RowIdentifier { get; set; }

		public EventOrderLikeDetail()
		{
		}

		public EventOrderLikeDetail(EventOrderLikeDetail other)
		{
		}

		public override EventOrderLikeDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
