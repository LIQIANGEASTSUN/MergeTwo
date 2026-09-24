
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be6124(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02be63f4 + 0x2be6140);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be63f8 + 0x2be6154));
    func_0x01438628(*(undefined4 *)(_UNK_02be63fc + 0x2be6160));
    func_0x01438628(*(undefined4 *)(_UNK_02be6400 + 0x2be616c));
    func_0x01438628(*(undefined4 *)(_UNK_02be6404 + 0x2be6178));
    func_0x01438628(*(undefined4 *)(_UNK_02be6408 + 0x2be6184));
    func_0x01438628(*(undefined4 *)(_UNK_02be640c + 0x2be6190));
    func_0x01438628(*(undefined4 *)(_UNK_02be6410 + 0x2be619c));
    func_0x01438628(*(undefined4 *)(_UNK_02be6414 + 0x2be61a8));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5009,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5009,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = iStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x02be6438(param_1,param_2);
  if (*(int *)(**(int **)(_UNK_02be6418 + 0x2be6218) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar8 = func_0x024f05c4(iVar1,0);
  if (*(int *)(**(int **)(_UNK_02be641c + 0x2be6244) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x0202346c(0);
  if (iVar1 == 0) {
    func_0x014388e4();
    uVar5 = func_0x01524ffc(8,0);
    func_0x014388e4();
    uVar2 = func_0x01524ffc(0xc,0);
    func_0x014388e4();
  }
  else {
    uVar5 = func_0x01524ffc(iVar1 + 8,0);
    uVar2 = func_0x01524ffc(iVar1 + 0xc,0);
  }
  uVar3 = func_0x01524ffc(iVar1 + 0x10,0);
  iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02be6420 + 0x2be62d4));
  func_0x04752f54(iVar4,**(undefined4 **)(_UNK_02be6424 + 0x2be62e8));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  puVar6 = *(undefined4 **)(_UNK_02be6428 + 0x2be630c);
  func_0x04753a34(iVar4,**(undefined4 **)(_UNK_02be642c + 0x2be6318),uVar8,*puVar6);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x01524ffc(iVar1 + 0x18,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x04753a34(iVar4,**(undefined4 **)(_UNK_02be6430 + 0x2be635c),uVar8,*puVar6);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x01524ffc(iVar1 + 0x14,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x04753a34(iVar4,**(undefined4 **)(_UNK_02be6434 + 0x2be63a0),uVar8,*puVar6);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_48 = uVar3;
  iStack_44 = iVar4;
  func_0x020257a4(iVar7,0x165,uVar5,uVar2);
  return;
}

