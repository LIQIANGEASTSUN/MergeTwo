
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b6be8(int param_1)

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
  
  pcVar5 = (char *)(_UNK_016b72e0 + 0x16b6c00);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b72e4 + 0x16b6c14));
    func_0x01438628(*(undefined4 *)(_UNK_016b72e8 + 0x16b6c20));
    func_0x01438628(*(undefined4 *)(_UNK_016b72ec + 0x16b6c2c));
    func_0x01438628(*(undefined4 *)(_UNK_016b72f0 + 0x16b6c38));
    func_0x01438628(*(undefined4 *)(_UNK_016b72f4 + 0x16b6c44));
    func_0x01438628(*(undefined4 *)(_UNK_016b72f8 + 0x16b6c50));
    func_0x01438628(*(undefined4 *)(_UNK_016b72fc + 0x16b6c5c));
    func_0x01438628(*(undefined4 *)(_UNK_016b7300 + 0x16b6c68));
    func_0x01438628(*(undefined4 *)(_UNK_016b7304 + 0x16b6c74));
    func_0x01438628(*(undefined4 *)(_UNK_016b7308 + 0x16b6c80));
    func_0x01438628(*(undefined4 *)(_UNK_016b730c + 0x16b6c8c));
    func_0x01438628(*(undefined4 *)(_UNK_016b7310 + 0x16b6c98));
    func_0x01438628(*(undefined4 *)(_UNK_016b7314 + 0x16b6ca4));
    func_0x01438628(*(undefined4 *)(_UNK_016b7318 + 0x16b6cb0));
    func_0x01438628(*(undefined4 *)(_UNK_016b731c + 0x16b6cbc));
    func_0x01438628(*(undefined4 *)(_UNK_016b7320 + 0x16b6cc8));
    func_0x01438628(*(undefined4 *)(_UNK_016b7324 + 0x16b6cd4));
    func_0x01438628(*(undefined4 *)(_UNK_016b7328 + 0x16b6ce0));
    func_0x01438628(*(undefined4 *)(_UNK_016b732c + 0x16b6cec));
    func_0x01438628(*(undefined4 *)(_UNK_016b7330 + 0x16b6cf8));
    func_0x01438628(*(undefined4 *)(_UNK_016b7334 + 0x16b6d04));
    func_0x01438628(*(undefined4 *)(_UNK_016b7338 + 0x16b6d10));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1834,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016b733c + 0x16b6d74) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016b7340 + 0x16b6d90));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_016b7344 + 0x16b6db0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x35c);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_016b7348 + 0x16b6df8));
    if (iVar3 == 0) {
      func_0x016b7394(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_016b734c + 0x16b6e1c));
      func_0x026cf7f8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_016b7350 + 0x16b6e38) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_016b7354 + 0x16b6e54));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026cf428(iVar3,uVar2,0);
      iVar4 = func_0x016b73fc(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x016b73fc(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_016b7358 + 0x16b6ef8));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_016b735c + 0x16b6f14);
        puVar9 = *(undefined4 **)(_UNK_016b7360 + 0x16b6f1c);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x016b7534(param_1,uVar2);
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
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_016b7364 + 0x16b6f98));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_016b736c + 0x16b6fd8));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_016b7370 + 0x16b6ff0);
      puVar9 = *(undefined4 **)(_UNK_016b7374 + 0x16b6ff8);
      while( true ) {
        iVar7 = func_0x016b73fc(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x016b73fc(param_1);
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
      if (*(int *)(**(int **)(_UNK_016b737c + 0x16b70d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_016b7380 + 0x16b70f4));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_016b7384 + 0x16b7130);
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
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_016b7388 + 0x16b7170));
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
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_016b738c + 0x16b7208));
      func_0x016b75f0(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_016b7390 + 0x16b7244));
  }
  else {
    iVar1 = func_0x029540a4(0x1834,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a3ec4(iVar1,param_1,0);
  }
  return;
}

