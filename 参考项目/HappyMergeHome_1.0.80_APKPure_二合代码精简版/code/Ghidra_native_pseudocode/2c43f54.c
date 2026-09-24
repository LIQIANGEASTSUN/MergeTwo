
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c53f54(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar8 = (char *)(iRam02c5466c + 0x2c53f70);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c54670 + 0x2c53f84));
    func_0x01438628(*(undefined4 *)(_UNK_02c54674 + 0x2c53f90));
    func_0x01438628(*(undefined4 *)(_UNK_02c54678 + 0x2c53f9c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5467c + 0x2c53fa8));
    func_0x01438628(*(undefined4 *)(_UNK_02c54680 + 0x2c53fb4));
    func_0x01438628(*(undefined4 *)(_UNK_02c54684 + 0x2c53fc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c54688 + 0x2c53fcc));
    func_0x01438628(*(undefined4 *)(_UNK_02c5468c + 0x2c53fd8));
    func_0x01438628(*(undefined4 *)(_UNK_02c54690 + 0x2c53fe4));
    func_0x01438628(*(undefined4 *)(_UNK_02c54694 + 0x2c53ff0));
    func_0x01438628(*(undefined4 *)(_UNK_02c54698 + 0x2c53ffc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f4c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f4c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar8 = (char *)(_UNK_028fcc9c + 0x28fcba8);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028fcca0 + 0x28fcbbc),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar5,0,0);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028fcca4 + 0x28fcc8c));
    return iVar1;
  }
  if (param_2 == 2) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c546c8 + 0x2c540e0));
    func_0x02c58df4(iVar1,0);
    piVar2 = *(int **)(_UNK_02c546cc + 0x2c540fc);
    iVar6 = *piVar2;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar2;
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x14);
    if (iVar4 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar2;
      }
      uVar7 = **(undefined4 **)(iVar6 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c546d0 + 0x2c54144));
      func_0x04a542e0(iVar4,uVar7,**(undefined4 **)(_UNK_02c546d4 + 0x2c54164),0);
      piVar3 = (int *)(*(int *)(*piVar2 + 0x5c) + 0x14);
      *piVar3 = iVar4;
      func_0x014385cc(piVar3,iVar4);
    }
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar1 + 8) = iVar4;
    func_0x014385cc((int *)(iVar1 + 8),iVar4);
    iVar6 = *piVar2;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar2;
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x18);
    if (iVar4 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar2;
      }
      uVar7 = **(undefined4 **)(iVar6 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c546d8 + 0x2c541e8));
      func_0x04a542e0(iVar4,uVar7,**(undefined4 **)(_UNK_02c546dc + 0x2c54208),0);
      piVar3 = (int *)(*(int *)(*piVar2 + 0x5c) + 0x18);
      *piVar3 = iVar4;
      func_0x014385cc(piVar3,iVar4);
    }
    *(int *)(iVar1 + 0xc) = iVar4;
    func_0x014385cc((int *)(iVar1 + 0xc),iVar4);
    iVar6 = *piVar2;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar2;
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x1c);
    if (iVar4 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar2;
      }
      uVar7 = **(undefined4 **)(iVar6 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c546e0 + 0x2c54280));
      func_0x04a542e0(iVar4,uVar7,**(undefined4 **)(_UNK_02c546e4 + 0x2c542a0),0);
      piVar3 = (int *)(*(int *)(*piVar2 + 0x5c) + 0x1c);
      *piVar3 = iVar4;
      func_0x014385cc(piVar3,iVar4);
    }
    *(int *)(iVar1 + 0x10) = iVar4;
    func_0x014385cc((int *)(iVar1 + 0x10),iVar4);
    iVar6 = *piVar2;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar2;
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x20);
    if (iVar4 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar2;
      }
      uVar7 = **(undefined4 **)(iVar6 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c546e8 + 0x2c54318));
      func_0x04a542e0(iVar4,uVar7,**(undefined4 **)(_UNK_02c546ec + 0x2c54338),0);
      piVar2 = (int *)(*(int *)(*piVar2 + 0x5c) + 0x20);
      *piVar2 = iVar4;
LAB_02c545c8:
      func_0x014385cc(piVar2,iVar4);
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 0) {
        uStack_24 = func_0x01438638(*(undefined4 *)(_UNK_02c546f0 + 0x2c545f8));
        uStack_20 = 0xffffffff;
        iStack_1c = param_2;
        uVar7 = func_0x014e95a8(&uStack_24,0);
        uVar5 = func_0x01438638(*(undefined4 *)(_UNK_02c546f4 + 0x2c54620));
        uVar7 = func_0x014e9568(uVar5,uVar7,0);
        func_0x01438638(*(undefined4 *)(_UNK_02c546f8 + 0x2c5463c));
        uVar5 = func_0x014388d4();
        func_0x014e95c8(uVar5,uVar7,0);
        uVar7 = func_0x01438638(*(undefined4 *)(_UNK_02c546fc + 0x2c5465c));
        func_0x01438790(uVar5,uVar7);
        func_0x014385d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c5469c + 0x2c54074));
      func_0x02c58df4(iVar1,0);
      uVar7 = *(undefined4 *)(param_1 + 0xd0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar1 + 0x18) = uVar7;
      func_0x014385cc((undefined4 *)(iVar1 + 0x18),uVar7);
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0xd4);
      func_0x014385cc();
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0xd8);
      func_0x014385cc();
      iVar4 = *(int *)(param_1 + 0xdc);
      piVar2 = (int *)(iVar1 + 0x24);
      *piVar2 = iVar4;
      goto LAB_02c545dc;
    }
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c546a0 + 0x2c5435c));
    func_0x02c58df4(iVar1,0);
    piVar2 = *(int **)(_UNK_02c546a4 + 0x2c54378);
    iVar6 = *piVar2;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar2;
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x5c) + 4);
    if (iVar4 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar2;
      }
      uVar7 = **(undefined4 **)(iVar6 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c546a8 + 0x2c543c0));
      func_0x04a542e0(iVar4,uVar7,**(undefined4 **)(_UNK_02c546ac + 0x2c543e0),0);
      piVar3 = (int *)(*(int *)(*piVar2 + 0x5c) + 4);
      *piVar3 = iVar4;
      func_0x014385cc(piVar3,iVar4);
    }
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar1 + 8) = iVar4;
    func_0x014385cc((int *)(iVar1 + 8),iVar4);
    iVar6 = *piVar2;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar2;
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x5c) + 8);
    if (iVar4 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar2;
      }
      uVar7 = **(undefined4 **)(iVar6 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c546b0 + 0x2c54464));
      func_0x04a542e0(iVar4,uVar7,**(undefined4 **)(_UNK_02c546b4 + 0x2c54484),0);
      piVar3 = (int *)(*(int *)(*piVar2 + 0x5c) + 8);
      *piVar3 = iVar4;
      func_0x014385cc(piVar3,iVar4);
    }
    *(int *)(iVar1 + 0xc) = iVar4;
    func_0x014385cc((int *)(iVar1 + 0xc),iVar4);
    iVar6 = *piVar2;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar2;
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x5c) + 0xc);
    if (iVar4 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar2;
      }
      uVar7 = **(undefined4 **)(iVar6 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c546b8 + 0x2c544fc));
      func_0x04a542e0(iVar4,uVar7,**(undefined4 **)(_UNK_02c546bc + 0x2c5451c),0);
      piVar3 = (int *)(*(int *)(*piVar2 + 0x5c) + 0xc);
      *piVar3 = iVar4;
      func_0x014385cc(piVar3,iVar4);
    }
    *(int *)(iVar1 + 0x10) = iVar4;
    func_0x014385cc((int *)(iVar1 + 0x10),iVar4);
    iVar6 = *piVar2;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar2;
    }
    iVar4 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x10);
    if (iVar4 == 0) {
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
        iVar6 = *piVar2;
      }
      uVar7 = **(undefined4 **)(iVar6 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c546c0 + 0x2c54594));
      func_0x04a542e0(iVar4,uVar7,**(undefined4 **)(_UNK_02c546c4 + 0x2c545b4),0);
      piVar2 = (int *)(*(int *)(*piVar2 + 0x5c) + 0x10);
      *piVar2 = iVar4;
      goto LAB_02c545c8;
    }
  }
  piVar2 = (int *)(iVar1 + 0x14);
  *piVar2 = iVar4;
LAB_02c545dc:
  func_0x014385cc(piVar2,iVar4);
  return iVar1;
}

