using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ComMergeMixSource : ProtoBaseProxy<ComMergeMixSource>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public static readonly MapField<int, int>.Codec _map_dieInto_codec;

		public readonly MapField<int, int> DieInto;

		public int FirstOutputTime;

		public bool IsBoostable;

		public bool IsFillClear;

		public bool IsJumpable;

		public bool IsSkipDieAnime;

		public int LimitCount;

		public static readonly MapField<int, int>.Codec _map_maxToast_codec;

		public readonly MapField<int, int> MaxToast;

		public static readonly FieldCodec<int> _repeated_mixId_codec;

		public readonly RepeatedField<int> MixId;

		public int OutputCount;

		public int OutputTime;

		public static readonly MapField<int, int>.Codec _map_outputsToast_codec;

		public readonly MapField<int, int> OutputsToast;

		public int ReviveCount;

		public int ReviveTime;

		public int StageCount;

		public int XXX_RowIdentifier { get; set; }

		public ComMergeMixSource()
		{
		}

		public ComMergeMixSource(ComMergeMixSource other)
		{
		}

		public override ComMergeMixSource Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
