
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0183a850(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0183af48 + 0x183a868);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183af4c + 0x183a87c));
    func_0x01438628(*(undefined4 *)(_UNK_0183af50 + 0x183a888));
    func_0x01438628(*(undefined4 *)(_UNK_0183af54 + 0x183a894));
    func_0x01438628(*(undefined4 *)(_UNK_0183af58 + 0x183a8a0));
    func_0x01438628(*(undefined4 *)(_UNK_0183af5c + 0x183a8ac));
    func_0x01438628(*(undefined4 *)(_UNK_0183af60 + 0x183a8b8));
    func_0x01438628(*(undefined4 *)(_UNK_0183af64 + 0x183a8c4));
    func_0x01438628(*(undefined4 *)(_UNK_0183af68 + 0x183a8d0));
    func_0x01438628(*(undefined4 *)(_UNK_0183af6c + 0x183a8dc));
    func_0x01438628(*(undefined4 *)(_UNK_0183af70 + 0x183a8e8));
    func_0x01438628(*(undefined4 *)(_UNK_0183af74 + 0x183a8f4));
    func_0x01438628(*(undefined4 *)(_UNK_0183af78 + 0x183a900));
    func_0x01438628(*(undefined4 *)(_UNK_0183af7c + 0x183a90c));
    func_0x01438628(*(undefined4 *)(_UNK_0183af80 + 0x183a918));
    func_0x01438628(*(undefined4 *)(_UNK_0183af84 + 0x183a924));
    func_0x01438628(*(undefined4 *)(_UNK_0183af88 + 0x183a930));
    func_0x01438628(*(undefined4 *)(_UNK_0183af8c + 0x183a93c));
    func_0x01438628(*(undefined4 *)(_UNK_0183af90 + 0x183a948));
    func_0x01438628(*(undefined4 *)(_UNK_0183af94 + 0x183a954));
    func_0x01438628(*(undefined4 *)(_UNK_0183af98 + 0x183a960));
    func_0x01438628(*(undefined4 *)(_UNK_0183af9c + 0x183a96c));
    func_0x01438628(*(undefined4 *)(_UNK_0183afa0 + 0x183a978));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x17ce,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0183afa4 + 0x183a9dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183afa8 + 0x183a9f8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0183afac + 0x183aa18));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x310);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_0183afb0 + 0x183aa60));
    if (iVar3 == 0) {
      func_0x0183affc(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0183afb4 + 0x183aa84));
      func_0x026cf7f8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_0183afb8 + 0x183aaa0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_0183afbc + 0x183aabc));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026cf428(iVar3,uVar2,0);
      iVar4 = func_0x0183b064(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x0183b064(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_0183afc0 + 0x183ab60));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0183afc4 + 0x183ab7c);
        puVar9 = *(undefined4 **)(_UNK_0183afc8 + 0x183ab84);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x0183b19c(param_1,uVar2);
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
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_0183afcc + 0x183ac00));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_0183afd4 + 0x183ac40));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_0183afd8 + 0x183ac58);
      puVar9 = *(undefined4 **)(_UNK_0183afdc + 0x183ac60);
      while( true ) {
        iVar7 = func_0x0183b064(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x0183b064(param_1);
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
        func_0x026ced30(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026cee00(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_0183afe4 + 0x183ad40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0183afe8 + 0x183ad5c));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_0183afec + 0x183ad98);
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
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_0183aff0 + 0x183add8));
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
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0183aff4 + 0x183ae70));
      func_0x0183b258(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_0183aff8 + 0x183aeac));
  }
  else {
    iVar1 = func_0x029540a4(0x17ce,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a3ec4(iVar1,param_1,0);
  }
  return;
}

