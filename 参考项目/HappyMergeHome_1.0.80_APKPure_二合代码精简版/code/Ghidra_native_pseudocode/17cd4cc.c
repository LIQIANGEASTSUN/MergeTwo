
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017dd4cc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
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
  
  pcVar7 = (char *)(_UNK_017dda58 + 0x17dd4e8);
  uStack_38 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017dda5c + 0x17dd4fc));
    func_0x01438628(*(undefined4 *)(_UNK_017dda60 + 0x17dd508));
    func_0x01438628(*(undefined4 *)(_UNK_017dda64 + 0x17dd514));
    func_0x01438628(*(undefined4 *)(_UNK_017dda68 + 0x17dd520));
    func_0x01438628(*(undefined4 *)(_UNK_017dda6c + 0x17dd52c));
    func_0x01438628(*(undefined4 *)(_UNK_017dda70 + 0x17dd538));
    func_0x01438628(*(undefined4 *)(_UNK_017dda74 + 0x17dd544));
    func_0x01438628(*(undefined4 *)(_UNK_017dda78 + 0x17dd550));
    func_0x01438628(*(undefined4 *)(_UNK_017dda7c + 0x17dd55c));
    func_0x01438628(*(undefined4 *)(_UNK_017dda80 + 0x17dd568));
    func_0x01438628(*(undefined4 *)(_UNK_017dda84 + 0x17dd574));
    func_0x01438628(*(undefined4 *)(_UNK_017dda88 + 0x17dd580));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5dbb,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_017dda8c + 0x17dd5e0));
    func_0x024eeca8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    piVar13 = (int *)(iVar2 + 8);
    *piVar13 = param_2;
    func_0x014385cc(piVar13,param_2);
    *(undefined4 *)(iVar2 + 0xc) = uStack_38;
    func_0x014385cc();
    iVar8 = *piVar13;
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    piVar12 = *(int **)(_UNK_017dda90 + 0x17dd648);
    puVar9 = *(undefined4 **)(_UNK_017dda94 + 0x17dd650);
    while( true ) {
      iVar8 = iVar8 + -1;
      iVar5 = *piVar13;
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0152ae0c(0,iVar5 + -6,0);
      iVar6 = *piVar13;
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (iVar8 < iVar5) break;
      iVar5 = func_0x0152983c(iVar6,iVar8,*puVar9);
      if (iVar5 != 0) {
        iVar5 = *piVar13;
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x0152983c(iVar5,iVar8,*puVar9);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x02c3f4b4(iVar5,0);
        if (0 < iVar5) {
          iVar5 = *piVar13;
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x0152983c(iVar5,iVar8,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar11 = *(undefined4 *)(iVar5 + 0xc);
          if (*(int *)(**(int **)(_UNK_017dda98 + 0x17dd738) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x024ef144(uVar11,0,0);
          if (iVar5 != 0) {
            iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_017dda9c + 0x17dd770));
            func_0x024eeca8(iVar5,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            piVar12 = (int *)(iVar5 + 0xc);
            *piVar12 = iVar2;
            func_0x014385cc(piVar12,iVar2);
            iVar6 = *piVar12;
            *(int *)(iVar5 + 8) = iVar8;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 8);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x0152983c(iVar6,iVar8,**(undefined4 **)(_UNK_017ddaa0 + 0x17dd7d4));
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uStack_34 = func_0x02c3f4b4(iVar6,0);
            iVar6 = *piVar12;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 8);
            puVar9 = *(undefined4 **)(_UNK_017ddaa4 + 0x17dd820);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x0152983c(iVar6,iVar8,*puVar9);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x024eecb8(iVar6,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            func_0x024ef228(&uStack_30,iVar6,0);
            uVar1 = uStack_28;
            uVar4 = uStack_2c;
            uVar11 = uStack_30;
            uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_017ddaa8 + 0x17dd898));
            func_0x0152e3ec(uVar3,iVar5,**(undefined4 **)(_UNK_017ddaac + 0x17dd8b4),0);
            FUN_017dd120(uStack_38,uStack_34,uVar11,uVar4,uVar1,uVar3);
            piVar12 = *(int **)(_UNK_017ddab0 + 0x17dd8ec);
            puVar9 = *(undefined4 **)(_UNK_017ddab4 + 0x17dd8f4);
          }
        }
        if (*(int *)(**(int **)(_UNK_017ddab8 + 0x17dd8fc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_017ddabc + 0x17dd918));
        iVar6 = *piVar13;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x0152983c(iVar6,iVar8,*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar10 = *piVar13;
        uVar11 = *(undefined4 *)(iVar6 + 0x24);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x0152983c(iVar10,iVar8,**(undefined4 **)(_UNK_017ddac0 + 0x17dd974));
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar6 + 0x24);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uStack_4c = 1;
        uStack_48 = 0xffffffff;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_50 = uVar4;
        func_0x02bd2cf0(iVar5,uVar11,0xffffffff,10,0,0x12);
        puVar9 = *(undefined4 **)(_UNK_017ddac4 + 0x17dd9e0);
      }
    }
    if (6 < *(int *)(iVar6 + 0xc)) {
      uVar11 = func_0x014388d4(**(undefined4 **)(_UNK_017ddac8 + 0x17dd9fc));
      func_0x0152e3ec(uVar11,iVar2,**(undefined4 **)(_UNK_017ddacc + 0x17dda18),0);
      if (*(int *)(**(int **)(_UNK_017ddad0 + 0x17dda2c) + 0x74) == 0) {
        func_0x014387a4();
      }
      func_0x029a9e10(0x3f19999a,uVar11,0);
    }
    return;
  }
  iVar2 = func_0x029540a4(0x5dbb,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar11 = uStack_38;
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,uVar11,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar8 = *(int *)(iVar2 + 8);
  uVar11 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar8,uVar11,&uStack_38,uVar4,0,0);
  return;
}

