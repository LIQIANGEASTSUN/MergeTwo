using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ObjBasic : ProtoBaseProxy<ObjBasic>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string BlackIcon;

		public string Desc;

		public string Icon;

		public string Image;

		public string Name;

		public int Price;

		public CoinType PriceType;

		public int XXX_RowIdentifier { get; set; }

		public ObjBasic()
		{
		}

		public ObjBasic(ObjBasic other)
		{
		}

		public override ObjBasic Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
