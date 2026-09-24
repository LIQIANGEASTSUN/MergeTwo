using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeMainTileRwd : ProtoBaseProxy<MergeMainTileRwd>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public bool IsDefault;

		public static readonly FieldCodec<string> _repeated_tileReward_codec;

		public readonly RepeatedField<string> TileReward;

		public int UnlockLv;

		public int XXX_RowIdentifier { get; set; }

		public MergeMainTileRwd()
		{
		}

		public MergeMainTileRwd(MergeMainTileRwd other)
		{
		}

		public override MergeMainTileRwd Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
