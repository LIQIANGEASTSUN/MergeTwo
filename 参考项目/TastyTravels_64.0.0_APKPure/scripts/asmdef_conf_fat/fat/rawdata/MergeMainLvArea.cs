using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeMainLvArea : ProtoBaseProxy<MergeMainLvArea>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string DisplayAsset;

		public static readonly FieldCodec<string> _repeated_includeTiles_codec;

		public readonly RepeatedField<string> IncludeTiles;

		public string TopLeftTile;

		public int UnlockLv;

		public int XXX_RowIdentifier { get; set; }

		public MergeMainLvArea()
		{
		}

		public MergeMainLvArea(MergeMainLvArea other)
		{
		}

		public override MergeMainLvArea Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
