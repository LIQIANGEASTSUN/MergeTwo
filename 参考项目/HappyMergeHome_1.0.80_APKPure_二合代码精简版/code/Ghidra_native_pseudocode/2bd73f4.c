
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02be73f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 uVar8;
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
  
  pcVar6 = (char *)(_UNK_02be7510 + 0x2be740c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be7514 + 0x2be7420));
    func_0x01438628(*(undefined4 *)(_UNK_02be7518 + 0x2be742c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd5a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd5a,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    iVar1 = func_0x024f5730(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = FUN_02bad050(param_1,param_2);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(uint *)(iVar1 + 0x58);
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02be751c + 0x2be74a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02be7520 + 0x2be74c4));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x026ffbe0(iVar4,0);
  iVar2 = uVar7 - (uint)uVar8;
  iVar1 = iVar1 - ((int)((ulonglong)uVar8 >> 0x20) + (uint)(uVar7 < (uint)uVar8));
  iVar4 = 0;
  if ((int)-(iVar1 + (uint)(iVar2 != 0)) < 0 !=
      (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(iVar2 != 0)))) {
    iVar4 = iVar2;
  }
  return iVar4;
}

