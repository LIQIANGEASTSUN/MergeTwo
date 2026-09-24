
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167c750(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0167ce48 + 0x167c768);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0167ce4c + 0x167c77c));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce50 + 0x167c788));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce54 + 0x167c794));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce58 + 0x167c7a0));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce5c + 0x167c7ac));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce60 + 0x167c7b8));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce64 + 0x167c7c4));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce68 + 0x167c7d0));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce6c + 0x167c7dc));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce70 + 0x167c7e8));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce74 + 0x167c7f4));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce78 + 0x167c800));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce7c + 0x167c80c));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce80 + 0x167c818));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce84 + 0x167c824));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce88 + 0x167c830));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce8c + 0x167c83c));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce90 + 0x167c848));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce94 + 0x167c854));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce98 + 0x167c860));
    func_0x01438628(*(undefined4 *)(_UNK_0167ce9c + 0x167c86c));
    func_0x01438628(*(undefined4 *)(_UNK_0167cea0 + 0x167c878));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xf6d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0167cea4 + 0x167c8dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0167cea8 + 0x167c8f8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_0167ceac + 0x167c918));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x398);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_0167ceb0 + 0x167c960));
    if (iVar3 == 0) {
      func_0x0167cefc(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0167ceb4 + 0x167c984));
      func_0x026efebc(iVar3,0);
      if (*(int *)(**(int **)(_UNK_0167ceb8 + 0x167c9a0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_0167cebc + 0x167c9bc));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026efba8(iVar3,uVar2,0);
      iVar4 = func_0x0167cf64(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x0167cf64(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_0167cec0 + 0x167ca60));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0167cec4 + 0x167ca7c);
        puVar9 = *(undefined4 **)(_UNK_0167cec8 + 0x167ca84);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x0167d09c(param_1,uVar2);
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
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_0167cecc + 0x167cb00));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_0167ced4 + 0x167cb40));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_0167ced8 + 0x167cb58);
      puVar9 = *(undefined4 **)(_UNK_0167cedc + 0x167cb60);
      while( true ) {
        iVar7 = func_0x0167cf64(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x0167cf64(param_1);
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
      if (*(int *)(**(int **)(_UNK_0167cee4 + 0x167cc40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_0167cee8 + 0x167cc5c));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_0167ceec + 0x167cc98);
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
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_0167cef0 + 0x167ccd8));
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
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0167cef4 + 0x167cd70));
      func_0x0167d158(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_0167cef8 + 0x167cdac));
  }
  else {
    iVar1 = func_0x029540a4(0xf6d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0289639c(iVar1,param_1,0);
  }
  return;
}

