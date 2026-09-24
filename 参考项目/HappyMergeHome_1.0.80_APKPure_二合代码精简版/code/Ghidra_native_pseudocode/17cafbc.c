
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017dafbc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_017db778 + 0x17dafd8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017db77c + 0x17dafec));
    func_0x01438628(*(undefined4 *)(_UNK_017db780 + 0x17daff8));
    func_0x01438628(*(undefined4 *)(_UNK_017db784 + 0x17db004));
    func_0x01438628(*(undefined4 *)(_UNK_017db788 + 0x17db010));
    func_0x01438628(*(undefined4 *)(_UNK_017db78c + 0x17db01c));
    func_0x01438628(*(undefined4 *)(_UNK_017db790 + 0x17db028));
    func_0x01438628(*(undefined4 *)(_UNK_017db794 + 0x17db034));
    func_0x01438628(*(undefined4 *)(_UNK_017db798 + 0x17db040));
    func_0x01438628(*(undefined4 *)(_UNK_017db79c + 0x17db04c));
    func_0x01438628(*(undefined4 *)(_UNK_017db7a0 + 0x17db058));
    func_0x01438628(*(undefined4 *)(_UNK_017db7a4 + 0x17db064));
    func_0x01438628(*(undefined4 *)(_UNK_017db7a8 + 0x17db070));
    func_0x01438628(*(undefined4 *)(_UNK_017db7ac + 0x17db07c));
    func_0x01438628(*(undefined4 *)(_UNK_017db7b0 + 0x17db088));
    func_0x01438628(*(undefined4 *)(_UNK_017db7b4 + 0x17db094));
    func_0x01438628(*(undefined4 *)(_UNK_017db7b8 + 0x17db0a0));
    func_0x01438628(*(undefined4 *)(_UNK_017db7bc + 0x17db0ac));
    func_0x01438628(*(undefined4 *)(_UNK_017db7c0 + 0x17db0b8));
    func_0x01438628(*(undefined4 *)(_UNK_017db7c4 + 0x17db0c4));
    func_0x01438628(*(undefined4 *)(_UNK_017db7c8 + 0x17db0d0));
    func_0x01438628(*(undefined4 *)(_UNK_017db7cc + 0x17db0dc));
    func_0x01438628(*(undefined4 *)(_UNK_017db7d0 + 0x17db0e8));
    func_0x01438628(*(undefined4 *)(_UNK_017db7d4 + 0x17db0f4));
    func_0x01438628(*(undefined4 *)(_UNK_017db7d8 + 0x17db100));
    func_0x01438628(*(undefined4 *)(_UNK_017db7dc + 0x17db10c));
    func_0x01438628(*(undefined4 *)(_UNK_017db7e0 + 0x17db118));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8fac,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017db7e4 + 0x17db17c));
    func_0x024eeca8(iVar1,0);
    iVar3 = FUN_017d48ec(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(param_2 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_017db7e8 + 0x17db1d4));
    if (iVar3 == 0) {
      iVar3 = FUN_017d48ec(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_017db7ec + 0x17db224));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_017db7f0 + 0x17db238));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_017db7f4 + 0x17db24c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_017d54d0(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_017db7f8 + 0x17db2a8));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_017db7fc + 0x17db2dc);
        while( true ) {
          iVar9 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar9 + 0x10);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = iStack_28;
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x024f0530(iVar10,iVar3,*puVar12);
          iVar10 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x024f0530(iVar10,iVar3,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_017db800 + 0x17db37c));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_017db804 + 0x17db3cc);
          *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar9 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar10 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x0152874c(iVar9,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_017db808 + 0x17db42c));
      func_0x024f1124(iVar3,**(undefined4 **)(_UNK_017db80c + 0x17db440));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_017db810 + 0x17db484) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_017d3d58();
        if (iVar3 != 0) {
          func_0x017f52a8(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_017db814 + 0x17db4b4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017db818 + 0x17db4d4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_017db81c + 0x17db50c);
        piVar13 = *(int **)(_UNK_017db820 + 0x17db514);
        while( true ) {
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x0152983c(iVar9,iVar3,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar10 = func_0x0202346c(0);
          if (iVar9 == 0) {
            func_0x014388e4();
            uVar2 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x01524ffc(iVar9 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar9 + 0xc,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar10,0x220,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_017db824 + 0x17db670) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e96a8(**(undefined4 **)(_UNK_017db828 + 0x17db68c));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_017db82c + 0x17db6a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_017db830 + 0x17db6c0));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_017db834 + 0x17db6e0));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_017db838 + 0x17db700),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0x69,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_017db83c + 0x17db608);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_017db840 + 0x17db624);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_017db844 + 0x17db638));
      *pcVar8 = '\x01';
    }
    iVar1 = *piVar14;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x8fac,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

