
/* WARNING: Possible PIC construction at 0x02974df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02974df8) */
/* WARNING: Removing unreachable block (ram,0x02974e04) */
/* WARNING: Removing unreachable block (ram,0x02974e08) */
/* WARNING: Removing unreachable block (ram,0x02974e20) */
/* WARNING: Removing unreachable block (ram,0x02974e24) */
/* WARNING: Removing unreachable block (ram,0x02974e3c) */
/* WARNING: Removing unreachable block (ram,0x02974e40) */
/* WARNING: Removing unreachable block (ram,0x02974e68) */
/* WARNING: Removing unreachable block (ram,0x02974e6c) */
/* WARNING: Removing unreachable block (ram,0x02974e78) */
/* WARNING: Removing unreachable block (ram,0x02974e7c) */
/* WARNING: Removing unreachable block (ram,0x02974e80) */
/* WARNING: Removing unreachable block (ram,0x02974e84) */
/* WARNING: Removing unreachable block (ram,0x02974e90) */
/* WARNING: Removing unreachable block (ram,0x02974e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02974be4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x02953fd4(0x47a7,0);
  if (iVar1 == 0) {
    uStack_38 = param_5;
    uStack_34 = param_6;
    uStack_30 = 0;
    func_0x02bf15ac(param_1,param_2,param_3,param_4);
    iVar1 = *(int *)(param_1 + 0xe4);
    if (iVar1 != 0) {
      pcVar5 = (char *)(_UNK_02974ea8 + 0x2974cb8);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02974eac + 0x2974ccc));
        func_0x01438628(*(undefined4 *)(_UNK_02974eb0 + 0x2974cd8));
        func_0x01438628(*(undefined4 *)(_UNK_02974eb4 + 0x2974ce4));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x47a8,0);
      if (iVar2 != 0) {
        iVar2 = func_0x029540a4(0x47a8,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_30 = 0;
        func_0x024f56c0(&uStack_48,0,0);
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01523a6c(&uStack_30,iVar1,0);
        iVar4 = *(int *)(iVar2 + 8);
        uVar6 = *(undefined4 *)(iVar2 + 0xc);
        iVar1 = *(int *)(iVar2 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar3 = 2;
        if (iVar1 == 0) {
          uVar3 = 1;
        }
        func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
        return;
      }
      func_0x02979238(iVar1);
      if (*(int *)(**(int **)(_UNK_02974eb8 + 0x2974d44) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02974ebc + 0x2974d60));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02eb6d70(iVar2,0);
      iVar4 = *(int *)(iVar1 + 0x48);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x014e94d8(iVar4,0);
      iVar1 = func_0x02978138(iVar1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      (*(code *)&UNK_05d3ec04)(iVar4,0 < iVar2 && iVar1 < 1,0);
      return;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x47a7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = param_5;
    uStack_30 = param_6;
    uStack_2c = 0;
    uStack_38 = param_4;
    func_0x028bc180(iVar1,param_1,param_2,param_3);
  }
  return;
}

