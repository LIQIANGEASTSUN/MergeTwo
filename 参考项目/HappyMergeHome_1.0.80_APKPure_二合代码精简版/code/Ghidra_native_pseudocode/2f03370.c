
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02f13370(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02f13474 + 0x2f13384);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f13478 + 0x2f13398));
    func_0x01438628(*(undefined4 *)(_UNK_02f1347c + 0x2f133a4));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x6caa,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x6caa,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02f13480 + 0x2f133fc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f13484 + 0x2f13418));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x026ffbe0(iVar2,0);
  iVar5 = (int)((ulonglong)uVar9 >> 0x20);
  iVar2 = FUN_02f0ab60(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar2 + 0x1c);
  bVar8 = *(uint *)(iVar2 + 0x18) < (uint)uVar9;
  return (uint)((int)(iVar3 - (iVar5 + (uint)bVar8)) < 0 !=
               (SBORROW4(iVar3,iVar5) != SBORROW4(iVar3 - iVar5,(uint)bVar8)));
}

