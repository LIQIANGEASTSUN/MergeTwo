
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01714754(int param_1)

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
  
  pcVar5 = (char *)(_UNK_01714e4c + 0x171476c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01714e50 + 0x1714780));
    func_0x01438628(*(undefined4 *)(_UNK_01714e54 + 0x171478c));
    func_0x01438628(*(undefined4 *)(_UNK_01714e58 + 0x1714798));
    func_0x01438628(*(undefined4 *)(_UNK_01714e5c + 0x17147a4));
    func_0x01438628(*(undefined4 *)(_UNK_01714e60 + 0x17147b0));
    func_0x01438628(*(undefined4 *)(_UNK_01714e64 + 0x17147bc));
    func_0x01438628(*(undefined4 *)(_UNK_01714e68 + 0x17147c8));
    func_0x01438628(*(undefined4 *)(_UNK_01714e6c + 0x17147d4));
    func_0x01438628(*(undefined4 *)(_UNK_01714e70 + 0x17147e0));
    func_0x01438628(*(undefined4 *)(_UNK_01714e74 + 0x17147ec));
    func_0x01438628(*(undefined4 *)(_UNK_01714e78 + 0x17147f8));
    func_0x01438628(*(undefined4 *)(_UNK_01714e7c + 0x1714804));
    func_0x01438628(*(undefined4 *)(_UNK_01714e80 + 0x1714810));
    func_0x01438628(*(undefined4 *)(_UNK_01714e84 + 0x171481c));
    func_0x01438628(*(undefined4 *)(_UNK_01714e88 + 0x1714828));
    func_0x01438628(*(undefined4 *)(_UNK_01714e8c + 0x1714834));
    func_0x01438628(*(undefined4 *)(_UNK_01714e90 + 0x1714840));
    func_0x01438628(*(undefined4 *)(_UNK_01714e94 + 0x171484c));
    func_0x01438628(*(undefined4 *)(_UNK_01714e98 + 0x1714858));
    func_0x01438628(*(undefined4 *)(_UNK_01714e9c + 0x1714864));
    func_0x01438628(*(undefined4 *)(_UNK_01714ea0 + 0x1714870));
    func_0x01438628(*(undefined4 *)(_UNK_01714ea4 + 0x171487c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xf84,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01714ea8 + 0x17148e0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01714eac + 0x17148fc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01714eb0 + 0x171491c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x3a0);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_01714eb4 + 0x1714964));
    if (iVar3 == 0) {
      func_0x01714f00(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01714eb8 + 0x1714988));
      func_0x026efebc(iVar3,0);
      if (*(int *)(**(int **)(_UNK_01714ebc + 0x17149a4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_01714ec0 + 0x17149c0));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026efba8(iVar3,uVar2,0);
      iVar4 = func_0x01714f68(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x01714f68(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_01714ec4 + 0x1714a64));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_01714ec8 + 0x1714a80);
        puVar9 = *(undefined4 **)(_UNK_01714ecc + 0x1714a88);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x017150a0(param_1,uVar2);
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
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_01714ed0 + 0x1714b04));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_01714ed8 + 0x1714b44));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_01714edc + 0x1714b5c);
      puVar9 = *(undefined4 **)(_UNK_01714ee0 + 0x1714b64);
      while( true ) {
        iVar7 = func_0x01714f68(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x01714f68(param_1);
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
      if (*(int *)(**(int **)(_UNK_01714ee8 + 0x1714c44) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01714eec + 0x1714c60));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_01714ef0 + 0x1714c9c);
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
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_01714ef4 + 0x1714cdc));
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
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_01714ef8 + 0x1714d74));
      func_0x0171515c(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_01714efc + 0x1714db0));
  }
  else {
    iVar1 = func_0x029540a4(0xf84,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0289639c(iVar1,param_1,0);
  }
  return;
}

