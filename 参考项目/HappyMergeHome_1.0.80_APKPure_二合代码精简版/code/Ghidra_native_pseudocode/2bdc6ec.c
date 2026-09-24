
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bec6ec(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
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
  
  pcVar4 = (char *)(_UNK_02bec8c8 + 0x2bec708);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bec8cc + 0x2bec71c));
    func_0x01438628(*(undefined4 *)(_UNK_02bec8d0 + 0x2bec728));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5ee0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5ee0,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028fca98 + 0x28fc980);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028fca9c + 0x28fc994),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01523a2c(&uStack_38,*param_2,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523aac(&uStack_38,0,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,1,0);
    uVar1 = func_0x024f56f0(&uStack_38,0,0);
    uVar6 = **(undefined4 **)(_UNK_028fcaa0 + 0x28fca80);
    *param_2 = uVar1;
    uVar6 = func_0x035daef8(&uStack_38,1,uVar6);
    return uVar6;
  }
  iVar2 = 4;
  piVar8 = *(int **)(_UNK_02bec8d4 + 0x2bec78c);
  puVar9 = *(undefined4 **)(_UNK_02bec8d8 + 0x2bec794);
  do {
    iVar5 = *(int *)(param_1 + 0x44);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar1 = iVar2 - 4;
    if (*(int *)(iVar5 + 0xc) <= (int)uVar1) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x44);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar1) {
      func_0x014388e8();
    }
    iVar5 = *(int *)(iVar5 + iVar2 * 4);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar5 + 0x14) == 3) {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(*puVar9);
      iVar7 = *(int *)(param_1 + 0x44);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar7 + 0xc) <= uVar1) {
        func_0x014388e8();
      }
      iVar7 = *(int *)(iVar7 + iVar2 * 4);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x02c3f4b4(iVar7,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x029a6fa8(iVar5,uVar6,0);
      if (((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == 2)) && (*(int *)(iVar5 + 0x70) != 0)) {
        iVar5 = *(int *)(param_1 + 0x44);
        *param_2 = uVar1;
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar1) {
          func_0x014388e8();
        }
        return *(undefined4 *)(iVar5 + iVar2 * 4);
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

