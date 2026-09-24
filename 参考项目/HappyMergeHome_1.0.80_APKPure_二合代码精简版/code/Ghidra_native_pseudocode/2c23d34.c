
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c33d34(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  pcVar6 = (char *)(_UNK_02c34a18 + 0x2c33d48);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c34a1c + 0x2c33d5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a20 + 0x2c33d68));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a24 + 0x2c33d74));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a28 + 0x2c33d80));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a2c + 0x2c33d8c));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a30 + 0x2c33d98));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a34 + 0x2c33da4));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a38 + 0x2c33db0));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a3c + 0x2c33dbc));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a40 + 0x2c33dc8));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a44 + 0x2c33dd4));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a48 + 0x2c33de0));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a4c + 0x2c33dec));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a50 + 0x2c33df8));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a54 + 0x2c33e04));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a58 + 0x2c33e10));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a5c + 0x2c33e1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a60 + 0x2c33e28));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a64 + 0x2c33e34));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a68 + 0x2c33e40));
    func_0x01438628(*(undefined4 *)(_UNK_02c34a6c + 0x2c33e4c));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x014386f0(**(undefined4 **)(_UNK_02c34a70 + 0x2c33e64),4);
  piVar8 = *(int **)(_UNK_02c34a74 + 0x2c33e78);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x68);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = uVar7;
  func_0x014385cc((undefined4 *)(iVar2 + 0x10),uVar7);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x6c);
  if (*(uint *)(iVar2 + 0xc) < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = uVar7;
  func_0x014385cc((undefined4 *)(iVar2 + 0x14),uVar7);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x70);
  if (*(uint *)(iVar2 + 0xc) < 3) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x18) = uVar7;
  func_0x014385cc((undefined4 *)(iVar2 + 0x18),uVar7);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74);
  if (*(uint *)(iVar2 + 0xc) < 4) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x1c) = uVar7;
  func_0x014385cc((undefined4 *)(iVar2 + 0x1c),uVar7);
  *(int *)(param_1 + 0x18) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x18),iVar2);
  puVar4 = *(undefined4 **)(_UNK_02c34a78 + 0x2c33f70);
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  uVar7 = *puVar4;
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  uVar7 = func_0x014388d4(uVar7);
  func_0x04752f54(uVar7,**(undefined4 **)(_UNK_02c34a7c + 0x2c33f90));
  *(undefined4 *)(param_1 + 0x120) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x120),uVar7);
  pcVar6 = (char *)(_UNK_02c34a80 + 0x2c33fb4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c34a84 + 0x2c33fc8));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_02c34a88 + 0x2c33fdc);
  iVar2 = *piVar8;
  pcVar6 = (char *)(_UNK_02c34a8c + 0x2c33fe8);
  cVar1 = *pcVar6;
  uVar9 = **(undefined8 **)(iVar2 + 0x5c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(*(undefined8 **)(iVar2 + 0x5c) + 1);
  *(undefined8 *)(param_1 + 0x138) = uVar9;
  if (cVar1 == '\0') {
    func_0x01438628(piVar8);
    iVar2 = *piVar8;
    *pcVar6 = '\x01';
  }
  uVar9 = *(undefined8 *)(*(int *)(iVar2 + 0x5c) + 0xc);
  uVar7 = **(undefined4 **)(_UNK_02c34a90 + 0x2c3402c);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x144) = uVar9;
  uVar7 = func_0x014386f0(uVar7,3);
  *(undefined4 *)(param_1 + 0x164) = uVar7;
  func_0x014385cc();
  uVar7 = func_0x014386f0(**(undefined4 **)(_UNK_02c34a94 + 0x2c34068),5);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34a98 + 0x2c34080),0);
  *(undefined4 *)(param_1 + 0x168) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x168),uVar7);
  puVar4 = *(undefined4 **)(_UNK_02c34a9c + 0x2c340b0);
  *(undefined4 *)(param_1 + 0x16c) = 0x3df5c28f;
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x3b;
  *(int *)(param_1 + 0x18c) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x18c),iVar2);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x59;
  *(int *)(param_1 + 0x1a4) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x1a4),iVar2);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x1b;
  *(int *)(param_1 + 0x1bc) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x1bc),iVar2);
  iVar2 = func_0x014386f0(*puVar4,2);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(uint *)(iVar2 + 0xc);
  if (uVar5 == 0) {
    func_0x014388e8();
    uVar5 = *(uint *)(iVar2 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x1c;
  if (uVar5 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = 0x1d;
  *(int *)(param_1 + 0x1d4) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x1d4),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34aa0 + 0x2c341f8),0);
  *(undefined4 *)(param_1 + 0x1ec) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x1ec),uVar7);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34aa4 + 0x2c34230),0);
  *(undefined4 *)(param_1 + 0x204) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x204),uVar7);
  iVar2 = func_0x014386f0(*puVar4,2);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(uint *)(iVar2 + 0xc);
  if (uVar5 == 0) {
    func_0x014388e8();
    uVar5 = *(uint *)(iVar2 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x26;
  if (uVar5 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = 0x27;
  *(int *)(param_1 + 0x21c) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x21c),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34aa8 + 0x2c342c4),0);
  *(undefined4 *)(param_1 + 0x234) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x234),uVar7);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x2c;
  *(int *)(param_1 + 0x24c) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x24c),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34aac + 0x2c34340),0);
  *(undefined4 *)(param_1 + 0x264) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x264),uVar7);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x31;
  *(int *)(param_1 + 0x27c) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x27c),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34ab0 + 0x2c343bc),0);
  *(undefined4 *)(param_1 + 0x294) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x294),uVar7);
  iVar2 = func_0x014386f0(*puVar4,2);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(uint *)(iVar2 + 0xc);
  if (uVar5 == 0) {
    func_0x014388e8();
    uVar5 = *(uint *)(iVar2 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0xe;
  if (uVar5 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = 0xf;
  *(int *)(param_1 + 0x2ac) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x2ac),iVar2);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x36;
  *(int *)(param_1 + 0x2c4) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x2c4),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34ab4 + 0x2c34494),0);
  *(undefined4 *)(param_1 + 0x2dc) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x2dc),uVar7);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34ab8 + 0x2c344cc),0);
  *(undefined4 *)(param_1 + 0x2f4) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x2f4),uVar7);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x40;
  *(int *)(param_1 + 0x30c) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x30c),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34abc + 0x2c34548),0);
  *(undefined4 *)(param_1 + 0x324) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x324),uVar7);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x45;
  *(int *)(param_1 + 0x33c) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x33c),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34ac0 + 0x2c345c4),0);
  *(undefined4 *)(param_1 + 0x354) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x354),uVar7);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x4a;
  *(int *)(param_1 + 0x36c) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x36c),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34ac4 + 0x2c34640),0);
  *(undefined4 *)(param_1 + 900) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 900),uVar7);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x4f;
  *(int *)(param_1 + 0x39c) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x39c),iVar2);
  iVar2 = func_0x014386f0(*puVar4,2);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(uint *)(iVar2 + 0xc);
  if (uVar5 == 0) {
    func_0x014388e8();
    uVar5 = *(uint *)(iVar2 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x10;
  if (uVar5 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = 0x11;
  *(int *)(param_1 + 0x3b4) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x3b4),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34ac8 + 0x2c34718),0);
  *(undefined4 *)(param_1 + 0x3cc) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x3cc),uVar7);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x54;
  *(int *)(param_1 + 0x3e4) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x3e4),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34acc + 0x2c34794),0);
  *(undefined4 *)(param_1 + 0x3fc) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x3fc),uVar7);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x5e;
  *(int *)(param_1 + 0x414) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x414),iVar2);
  uVar7 = func_0x014386f0(*puVar4,4);
  func_0x024eec98(uVar7,**(undefined4 **)(_UNK_02c34ad0 + 0x2c34810),0);
  *(undefined4 *)(param_1 + 0x42c) = uVar7;
  func_0x014385cc((undefined4 *)(param_1 + 0x42c),uVar7);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x12;
  *(int *)(param_1 + 0x468) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x468),iVar2);
  iVar2 = func_0x014386f0(*puVar4,2);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(uint *)(iVar2 + 0xc);
  if (uVar5 == 0) {
    func_0x014388e8();
    uVar5 = *(uint *)(iVar2 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x13;
  if (uVar5 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = 0x14;
  *(int *)(param_1 + 0x480) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x480),iVar2);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x15;
  *(int *)(param_1 + 0x4bc) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x4bc),iVar2);
  iVar2 = func_0x014386f0(*puVar4,2);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(uint *)(iVar2 + 0xc);
  if (uVar5 == 0) {
    func_0x014388e8();
    uVar5 = *(uint *)(iVar2 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x16;
  if (uVar5 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = 0x17;
  *(int *)(param_1 + 0x4d4) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x4d4),iVar2);
  iVar2 = func_0x014386f0(*puVar4,1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x18;
  *(int *)(param_1 + 0x510) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x510),iVar2);
  iVar2 = func_0x014386f0(*puVar4,2);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(uint *)(iVar2 + 0xc);
  if (uVar5 == 0) {
    func_0x014388e8();
    uVar5 = *(uint *)(iVar2 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0x19;
  if (uVar5 < 2) {
    func_0x014388e8();
  }
  *(undefined4 *)(iVar2 + 0x14) = 0x1a;
  *(int *)(param_1 + 0x528) = iVar2;
  func_0x014385cc((int *)(param_1 + 0x528),iVar2);
  (*(code *)&UNK_05d40524)(param_1,0);
  return;
}

