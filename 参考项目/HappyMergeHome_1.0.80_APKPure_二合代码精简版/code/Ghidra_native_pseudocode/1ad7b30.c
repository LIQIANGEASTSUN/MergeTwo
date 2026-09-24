
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ae7b30(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01ae8184 + 0x1ae7b48);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae8188 + 0x1ae7b5c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae818c + 0x1ae7b68));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8190 + 0x1ae7b74));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8194 + 0x1ae7b80));
    func_0x01438628(*(undefined4 *)(_UNK_01ae8198 + 0x1ae7b8c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae819c + 0x1ae7b98));
    func_0x01438628(*(undefined4 *)(_UNK_01ae81a0 + 0x1ae7ba4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae81a4 + 0x1ae7bb0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae81a8 + 0x1ae7bbc));
    func_0x01438628(*(undefined4 *)(_UNK_01ae81ac + 0x1ae7bc8));
    func_0x01438628(*(undefined4 *)(_UNK_01ae81b0 + 0x1ae7bd4));
    func_0x01438628(*(undefined4 *)(_UNK_01ae81b4 + 0x1ae7be0));
    func_0x01438628(*(undefined4 *)(_UNK_01ae81b8 + 0x1ae7bec));
    *pcVar7 = '\x01';
  }
  iVar13 = 0;
  iVar1 = func_0x02953fd4(0x189d,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    if (param_1 != 0 && uVar2 != 0) {
      iVar1 = *(int *)(uVar2 + 0x60);
      if (iVar1 != 0) {
        uVar2 = (uint)*(byte *)(iVar1 + 8);
      }
      if ((iVar1 != 0 && uVar2 != 0) && (*(char *)(iVar1 + 0x14) == '\0')) {
        iVar13 = func_0x014388d4(**(undefined4 **)(_UNK_01ae81bc + 0x1ae7c88));
        func_0x024eed9c(iVar13,**(undefined4 **)(_UNK_01ae81c0 + 0x1ae7c9c));
        iVar10 = 0;
        puVar12 = *(undefined4 **)(_UNK_01ae81c4 + 0x1ae7cb4);
        iStack_2c = iVar1;
        while( true ) {
          iVar1 = iStack_2c;
          iVar8 = *(int *)(iStack_2c + 0xc);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar8 + 0xc) <= iVar10) break;
          iVar8 = *(int *)(iVar1 + 0xc);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iStack_28 = iVar10;
          iVar10 = func_0x014e9698(iVar8,iVar10,**(undefined4 **)(_UNK_01ae81c8 + 0x1ae7cf0));
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar9 = *(undefined4 *)(iVar10 + 0x24);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024f0f34(iVar1,uVar9,**(undefined4 **)(_UNK_01ae81cc + 0x1ae7d30));
          if (iVar1 != 0) {
            if (*(char *)(iStack_2c + 9) != '\0') {
              if (*(char *)(iVar10 + 0xd) == '\0') {
                iVar1 = 0;
                while( true ) {
                  iVar8 = *(int *)(iVar10 + 0x14);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar8 + 0xc) <= iVar1) break;
                  iVar8 = *(int *)(iVar10 + 0x14);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  uVar9 = func_0x024f05a4(iVar8,iVar1,*puVar12);
                  iVar8 = *(int *)(iVar10 + 0x18);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f05a4(iVar8,iVar1,*puVar12);
                  uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01ae81d0 + 0x1ae7f10));
                  uStack_30 = 0;
                  func_0x02ca3c70(uVar3,uVar9,uVar6,0);
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = *(int *)(iVar13 + 8);
                  uVar2 = *(uint *)(iVar13 + 0xc);
                  piVar5 = *(int **)(_UNK_01ae81d4 + 0x1ae7f60);
                  *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
                  iVar11 = *piVar5;
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar2 < *(uint *)(iVar8 + 0xc)) {
                    *(uint *)(iVar13 + 0xc) = uVar2 + 1;
                    puVar4 = (undefined4 *)(iVar8 + uVar2 * 4 + 0x10);
                    *puVar4 = uVar3;
                    func_0x014385cc(puVar4,uVar3);
                  }
                  else {
                    func_0x0152874c(iVar13,uVar3,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                                   );
                  }
                  iVar1 = iVar1 + 1;
                }
              }
              if (*(char *)(iVar10 + 0x28) == '\0') {
                iVar1 = 0;
                while( true ) {
                  iVar8 = *(int *)(iVar10 + 0x2c);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar8 + 0xc) <= iVar1) break;
                  iVar8 = *(int *)(iVar10 + 0x2c);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  uVar9 = func_0x024f05a4(iVar8,iVar1,*puVar12);
                  iVar8 = *(int *)(iVar10 + 0x30);
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  uVar6 = func_0x024f05a4(iVar8,iVar1,*puVar12);
                  uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01ae81d8 + 0x1ae8028));
                  uStack_30 = 0;
                  func_0x02ca3c70(uVar3,uVar9,uVar6,0);
                  if (iVar13 == 0) {
                    func_0x014388e4();
                  }
                  iVar8 = *(int *)(iVar13 + 8);
                  uVar2 = *(uint *)(iVar13 + 0xc);
                  piVar5 = *(int **)(_UNK_01ae81dc + 0x1ae8078);
                  *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
                  iVar11 = *piVar5;
                  if (iVar8 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar2 < *(uint *)(iVar8 + 0xc)) {
                    *(uint *)(iVar13 + 0xc) = uVar2 + 1;
                    puVar4 = (undefined4 *)(iVar8 + uVar2 * 4 + 0x10);
                    *puVar4 = uVar3;
                    func_0x014385cc(puVar4,uVar3);
                  }
                  else {
                    func_0x0152874c(iVar13,uVar3,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                                   );
                  }
                  iVar1 = iVar1 + 1;
                }
              }
            }
            if (*(char *)(iVar10 + 0xc) == '\0') {
              iVar1 = 0;
              while( true ) {
                iVar8 = *(int *)(iVar10 + 0x1c);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar8 + 0xc) <= iVar1) break;
                iVar8 = *(int *)(iVar10 + 0x1c);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                uVar9 = func_0x024f05a4(iVar8,iVar1,*puVar12);
                iVar8 = *(int *)(iVar10 + 0x20);
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                uVar6 = func_0x024f05a4(iVar8,iVar1,*puVar12);
                uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01ae81e0 + 0x1ae7df8));
                uStack_30 = 0;
                func_0x02ca3c70(uVar3,uVar9,uVar6,0);
                if (iVar13 == 0) {
                  func_0x014388e4();
                }
                iVar8 = *(int *)(iVar13 + 8);
                uVar2 = *(uint *)(iVar13 + 0xc);
                piVar5 = *(int **)(_UNK_01ae81e4 + 0x1ae7e48);
                *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
                iVar11 = *piVar5;
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                if (uVar2 < *(uint *)(iVar8 + 0xc)) {
                  *(uint *)(iVar13 + 0xc) = uVar2 + 1;
                  puVar4 = (undefined4 *)(iVar8 + uVar2 * 4 + 0x10);
                  *puVar4 = uVar3;
                  func_0x014385cc(puVar4,uVar3);
                }
                else {
                  func_0x0152874c(iVar13,uVar3,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                }
                iVar1 = iVar1 + 1;
              }
            }
          }
          iVar10 = iStack_28 + 1;
        }
        piVar5 = *(int **)(_UNK_01ae81e8 + 0x1ae80d8);
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar5;
        }
        iVar10 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar10 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x014387a4();
            iVar1 = *piVar5;
          }
          uVar9 = **(undefined4 **)(iVar1 + 0x5c);
          iVar10 = func_0x014388d4(**(undefined4 **)(_UNK_01ae81ec + 0x1ae8120));
          func_0x03a062d0(iVar10,uVar9,**(undefined4 **)(_UNK_01ae81f0 + 0x1ae8140),0);
          piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
          *piVar5 = iVar10;
          func_0x014385cc(piVar5,iVar10);
        }
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        func_0x024f16bc(iVar13,iVar10,**(undefined4 **)(_UNK_01ae81f4 + 0x1ae8178));
      }
    }
    return iVar13;
  }
  iVar1 = func_0x029540a4(0x189d,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_02884cc8 + 0x2884be8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02884ccc + 0x2884bfc),param_1,0);
    *pcVar7 = '\x01';
  }
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0);
  uStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar13 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar13 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  func_0x024f56d0(iVar13,uVar9,&uStack_30,uVar6,0,0);
  iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02884cd0 + 0x2884cb8));
  return iVar1;
}

