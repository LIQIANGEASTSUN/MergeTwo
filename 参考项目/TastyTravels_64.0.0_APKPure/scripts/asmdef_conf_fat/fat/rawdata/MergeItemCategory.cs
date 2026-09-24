using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class MergeItemCategory : ProtoBaseProxy<MergeItemCategory>, IRowIdentifier<string>
	{
		public static readonly string FullName;

		public int ConfigVersion;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string Desc;

		public static readonly FieldCodec<int> _repeated_directFrom_codec;

		public readonly RepeatedField<int> DirectFrom;

		public static readonly FieldCodec<int> _repeated_fromItems_codec;

		public readonly RepeatedField<int> FromItems;

		public int GalleryCategory;

		public string GalleryDesc;

		public string GalleryReward;

		public bool Hidden;

		public bool IsAliveCheck;

		public bool IsShowFrom;

		public int MergeStyle;

		public string Name;

		public int NewItemToast;

		public static readonly FieldCodec<int> _repeated_originFrom_codec;

		public readonly RepeatedField<int> OriginFrom;

		public static readonly FieldCodec<int> _repeated_progress_codec;

		public readonly RepeatedField<int> Progress;

		public int Sort;

		public int Type;

		public bool UnlockPreItem;

		public string XXX_RowIdentifier { get; set; }

		public MergeItemCategory()
		{
		}

		public MergeItemCategory(MergeItemCategory other)
		{
		}

		public override MergeItemCategory Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
