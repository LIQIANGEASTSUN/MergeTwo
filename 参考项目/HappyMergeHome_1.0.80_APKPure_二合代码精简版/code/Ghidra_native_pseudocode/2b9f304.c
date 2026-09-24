
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02baf304(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02baf4cc + 0x2baf320);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baf4d0 + 0x2baf334));
    func_0x01438628(*(undefined4 *)(_UNK_02baf4d4 + 0x2baf340));
    func_0x01438628(*(undefined4 *)(_UNK_02baf4d8 + 0x2baf34c));
    func_0x01438628(*(undefined4 *)(_UNK_02baf4dc + 0x2baf358));
    func_0x01438628(*(undefined4 *)(_UNK_02baf4e0 + 0x2baf364));
    func_0x01438628(*(undefined4 *)(_UNK_02baf4e4 + 0x2baf370));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iVar1 = func_0x02953fd4(0x3446,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3446,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02897860 + 0x289776c);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02897864 + 0x2897780),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar5,uVar3,&uStack_38,uVar2,0,0);
    uVar3 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02897868 + 0x2897850));
    return uVar3;
  }
  uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02baf4e8 + 0x2baf3d4));
  func_0x046c19b0(uVar3,**(undefined4 **)(_UNK_02baf4ec + 0x2baf3e8));
  puVar6 = *(undefined4 **)(_UNK_02baf4f0 + 0x2baf3fc);
  piVar7 = *(int **)(_UNK_02baf4f4 + 0x2baf404);
  puVar8 = *(undefined4 **)(_UNK_02baf4f8 + 0x2baf40c);
  while( true ) {
    iVar1 = FUN_02bad050(param_1,param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar5) break;
    iVar1 = FUN_02bad050(param_1,param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03b780b0(iVar1,iVar5,*puVar6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 8);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x035e4174(uVar3,uVar2,1,*puVar8);
    iVar5 = iVar5 + 1;
  }
  return uVar3;
}

