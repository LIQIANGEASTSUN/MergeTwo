
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01926264(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_0192695c + 0x192627c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01926960 + 0x1926290));
    func_0x01438628(*(undefined4 *)(_UNK_01926964 + 0x192629c));
    func_0x01438628(*(undefined4 *)(_UNK_01926968 + 0x19262a8));
    func_0x01438628(*(undefined4 *)(_UNK_0192696c + 0x19262b4));
    func_0x01438628(*(undefined4 *)(_UNK_01926970 + 0x19262c0));
    func_0x01438628(*(undefined4 *)(_UNK_01926974 + 0x19262cc));
    func_0x01438628(*(undefined4 *)(_UNK_01926978 + 0x19262d8));
    func_0x01438628(*(undefined4 *)(_UNK_0192697c + 0x19262e4));
    func_0x01438628(*(undefined4 *)(_UNK_01926980 + 0x19262f0));
    func_0x01438628(*(undefined4 *)(_UNK_01926984 + 0x19262fc));
    func_0x01438628(*(undefined4 *)(_UNK_01926988 + 0x1926308));
    func_0x01438628(*(undefined4 *)(_UNK_0192698c + 0x1926314));
    func_0x01438628(*(undefined4 *)(_UNK_01926990 + 0x1926320));
    func_0x01438628(*(undefined4 *)(_UNK_01926994 + 0x192632c));
    func_0x01438628(*(undefined4 *)(_UNK_01926998 + 0x1926338));
    func_0x01438628(*(undefined4 *)(_UNK_0192699c + 0x1926344));
    func_0x01438628(*(undefined4 *)(_UNK_019269a0 + 0x1926350));
    func_0x01438628(*(undefined4 *)(_UNK_019269a4 + 0x192635c));
    func_0x01438628(*(undefined4 *)(_UNK_019269a8 + 0x1926368));
    func_0x01438628(*(undefined4 *)(_UNK_019269ac + 0x1926374));
    func_0x01438628(*(undefined4 *)(_UNK_019269b0 + 0x1926380));
    func_0x01438628(*(undefined4 *)(_UNK_019269b4 + 0x192638c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xf9b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_019269b8 + 0x19263f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019269bc + 0x192640c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_019269c0 + 0x192642c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x3ac);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_019269c4 + 0x1926474));
    if (iVar3 == 0) {
      func_0x01926a10(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_019269c8 + 0x1926498));
      func_0x026efebc(iVar3,0);
      if (*(int *)(**(int **)(_UNK_019269cc + 0x19264b4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_019269d0 + 0x19264d0));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026efba8(iVar3,uVar2,0);
      iVar4 = func_0x01926a78(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x01926a78(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_019269d4 + 0x1926574));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_019269d8 + 0x1926590);
        puVar9 = *(undefined4 **)(_UNK_019269dc + 0x1926598);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x01926bb0(param_1,uVar2);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar7,uVar2,*puVar9);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_019269e0 + 0x1926614));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_019269e8 + 0x1926654));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_019269ec + 0x192666c);
      puVar9 = *(undefined4 **)(_UNK_019269f0 + 0x1926674);
      while( true ) {
        iVar7 = func_0x01926a78(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x01926a78(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x024f0530(iVar7,iVar4,*puVar6);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x024f05ac(iVar10,uVar2,*puVar9);
        iVar4 = iVar4 + 1;
      }
      uVar11 = func_0x029f3fe4(param_1,0);
      if ((int)uVar11 != 0) {
        func_0x026ef4b0(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026ef580(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_019269f8 + 0x1926754) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_019269fc + 0x1926770));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_01926a00 + 0x19267ac);
        do {
          iVar8 = *(int *)(iVar3 + 0x48);
          iVar10 = func_0x0152983c(iVar4,iVar7,*puVar6);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar10 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_01926a04 + 0x19267ec));
          if (iVar10 == 0) {
            iVar8 = *(int *)(iVar3 + 0x48);
            iVar10 = func_0x0152983c(iVar4,iVar7,*puVar6);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar10 + 8);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar8,uVar2,*puVar9);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar4 + 0xc));
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_01926a08 + 0x1926884));
      func_0x01926c6c(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_01926a0c + 0x19268c0));
  }
  else {
    iVar1 = func_0x029540a4(0xf9b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0289639c(iVar1,param_1,0);
  }
  return;
}

