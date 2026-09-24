
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cd0160(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
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
  
  pcVar5 = (char *)(_UNK_01cd031c + 0x1cd017c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cd0320 + 0x1cd0190));
    func_0x01438628(*(undefined4 *)(_UNK_01cd0324 + 0x1cd019c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xafed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xafed,0);
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
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = FUN_01ccc5a4(param_1);
  piVar8 = *(int **)(_UNK_01cd0328 + 0x1cd0208);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_01cd032c + 0x1cd0224);
  iVar6 = func_0x014e9518(*puVar9);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar10 = func_0x026ffbe0(iVar6,0);
  iVar3 = (int)((ulonglong)uVar10 >> 0x20);
  iVar6 = iVar3;
  if (iVar1 == 0) {
    func_0x014388e4();
    iVar6 = extraout_r1;
  }
  uStack_28 = 0;
  uVar2 = param_2 * 1000;
  func_0x026a7238(iVar1,iVar6,(uint)uVar10 + uVar2,
                  iVar3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4((uint)uVar10,uVar2));
  iVar1 = FUN_01ccc5a4(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0xc) != '\0') {
    iVar1 = FUN_01ccc5a4(param_1);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x014e9518(*puVar9);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    lVar11 = func_0x026ffbe0(iVar6,0);
    uVar7 = (undefined4)((ulonglong)lVar11 >> 0x20);
    if (iVar1 == 0) {
      func_0x014388e4();
      uVar7 = extraout_r1_00;
    }
    uStack_28 = 0;
    lVar11 = (longlong)param_2 * 1000 + lVar11;
    func_0x026a73d8(iVar1,uVar7,(int)lVar11,(int)((ulonglong)lVar11 >> 0x20));
  }
  return;
}

