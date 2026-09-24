
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0174e5a0(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0174ec98 + 0x174e5b8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0174ec9c + 0x174e5cc));
    func_0x01438628(*(undefined4 *)(_UNK_0174eca0 + 0x174e5d8));
    func_0x01438628(*(undefined4 *)(_UNK_0174eca4 + 0x174e5e4));
    func_0x01438628(*(undefined4 *)(_UNK_0174eca8 + 0x174e5f0));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecac + 0x174e5fc));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecb0 + 0x174e608));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecb4 + 0x174e614));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecb8 + 0x174e620));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecbc + 0x174e62c));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecc0 + 0x174e638));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecc4 + 0x174e644));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecc8 + 0x174e650));
    func_0x01438628(*(undefined4 *)(_UNK_0174eccc + 0x174e65c));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecd0 + 0x174e668));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecd4 + 0x174e674));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecd8 + 0x174e680));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecdc + 0x174e68c));
    func_0x01438628(*(undefined4 *)(_UNK_0174ece0 + 0x174e698));
    func_0x01438628(*(undefined4 *)(_UNK_0174ece4 + 0x174e6a4));
    func_0x01438628(*(undefined4 *)(_UNK_0174ece8 + 0x174e6b0));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecec + 0x174e6bc));
    func_0x01438628(*(undefined4 *)(_UNK_0174ecf0 + 0x174e6c8));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x15c1,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0174ecf4 + 0x174e72c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0174ecf8 + 0x174e748));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0174ecfc + 0x174e768));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x394);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_0174ed00 + 0x174e7b0));
    if (iVar3 == 0) {
      func_0x0174ed4c(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0174ed04 + 0x174e7d4));
      func_0x026cf7f8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_0174ed08 + 0x174e7f0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_0174ed0c + 0x174e80c));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026cf428(iVar3,uVar2,0);
      iVar4 = func_0x0174edb4(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x0174edb4(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_0174ed10 + 0x174e8b0));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0174ed14 + 0x174e8cc);
        puVar9 = *(undefined4 **)(_UNK_0174ed18 + 0x174e8d4);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x0174eeec(param_1,uVar2);
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
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_0174ed1c + 0x174e950));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_0174ed24 + 0x174e990));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_0174ed28 + 0x174e9a8);
      puVar9 = *(undefined4 **)(_UNK_0174ed2c + 0x174e9b0);
      while( true ) {
        iVar7 = func_0x0174edb4(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x0174edb4(param_1);
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
      if (*(int *)(**(int **)(_UNK_0174ed34 + 0x174ea90) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0174ed38 + 0x174eaac));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_0174ed3c + 0x174eae8);
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
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_0174ed40 + 0x174eb28));
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
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0174ed44 + 0x174ebc0));
      func_0x0174efa8(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_0174ed48 + 0x174ebfc));
  }
  else {
    iVar1 = func_0x029540a4(0x15c1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a3ec4(iVar1,param_1,0);
  }
  return;
}

