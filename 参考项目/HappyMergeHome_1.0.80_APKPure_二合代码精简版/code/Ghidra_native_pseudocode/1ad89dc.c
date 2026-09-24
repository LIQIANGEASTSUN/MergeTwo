
/* WARNING: Possible PIC construction at 0x01ae8bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ae8c00) */
/* WARNING: Removing unreachable block (ram,0x01ae8c0c) */
/* WARNING: Removing unreachable block (ram,0x01ae8c1c) */
/* WARNING: Removing unreachable block (ram,0x01ae8c20) */
/* WARNING: Removing unreachable block (ram,0x01ae8c3c) */
/* WARNING: Removing unreachable block (ram,0x01ae8c44) */
/* WARNING: Removing unreachable block (ram,0x01ae8c6c) */
/* WARNING: Removing unreachable block (ram,0x01ae8c70) */
/* WARNING: Removing unreachable block (ram,0x01ae8c88) */
/* WARNING: Removing unreachable block (ram,0x01ae8c94) */
/* WARNING: Removing unreachable block (ram,0x01ae8ca0) */
/* WARNING: Removing unreachable block (ram,0x01ae8ca4) */
/* WARNING: Removing unreachable block (ram,0x01ae8cbc) */
/* WARNING: Removing unreachable block (ram,0x01ae8cc0) */
/* WARNING: Removing unreachable block (ram,0x01ae8ce8) */
/* WARNING: Removing unreachable block (ram,0x01ae8cec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ae89dc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01ae9094 + 0x1ae89f4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae9098 + 0x1ae8a08));
    func_0x01438628(*(undefined4 *)(_UNK_01ae909c + 0x1ae8a14));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90a0 + 0x1ae8a20));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90a4 + 0x1ae8a2c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90a8 + 0x1ae8a38));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90ac + 0x1ae8a44));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90b0 + 0x1ae8a50));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90b4 + 0x1ae8a5c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90b8 + 0x1ae8a68));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90bc + 0x1ae8a74));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90c0 + 0x1ae8a80));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90c4 + 0x1ae8a8c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90c8 + 0x1ae8a98));
    func_0x01438628(*(undefined4 *)(_UNK_01ae90cc + 0x1ae8aa4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x189a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x189a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar3,0,0);
    uVar8 = func_0x024f56e0(&uStack_30,0,0);
    return uVar8;
  }
  piVar7 = *(int **)(_UNK_01ae90d0 + 0x1ae8b00);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_01ae90d4 + 0x1ae8b1c);
  iVar1 = func_0x014e9518(*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x10) == '\0') {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x38) != 0 || *(int *)(iVar1 + 0x3c) != 0) {
      return 0;
    }
  }
  iVar1 = FUN_01ae7090();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    if (iVar1 == 0) {
      iVar1 = FUN_01ae4524();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01ae90ec + 0x1ae8eb8));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ae90f0 + 0x1ae8ed0));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_01ae90f4 + 0x1ae8ee8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar5) {
        uVar8 = 0;
        puVar9 = *(undefined4 **)(_UNK_01ae90f8 + 0x1ae8f18);
        puVar10 = *(undefined4 **)(_UNK_01ae90fc + 0x1ae8f20);
        piVar7 = *(int **)(_UNK_01ae9100 + 0x1ae8f28);
        do {
          iVar6 = FUN_01ae4524();
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar3 = func_0x0152983c(iVar1,uVar5,*puVar9);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04d4(iVar6,uVar3,*puVar10);
          iVar2 = FUN_01ae6a18();
          if (iVar2 != 0) {
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar6 + 0x18);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(char *)(iVar2 + 0x28) == '\0') {
              iVar6 = *(int *)(iVar6 + 0x18);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              func_0x026bfc74(iVar6,1,0);
              if (*(int *)(**(int **)(_UNK_01ae9104 + 0x1ae8fcc) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01ae9108 + 0x1ae8fe8));
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x150);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02b0c90c(iVar6,uVar8,0,0);
              if (*(int *)(**(int **)(_UNK_01ae910c + 0x1ae9040) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x024eec50(uVar8,0,0);
              uVar8 = 1;
              if (iVar6 != 0) {
                return 0;
              }
            }
          }
          uVar5 = uVar5 - 1;
          if (0x7fffffff < uVar5) {
            return uVar8;
          }
        } while( true );
      }
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_01ae4524();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01ae9110 + 0x1ae8da8));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ae9114 + 0x1ae8dc0));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_01ae9118 + 0x1ae8dd8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(int *)(iVar1 + 0xc) - 1;
      if ((int)uVar5 < 0) {
        return 0;
      }
      puVar9 = *(undefined4 **)(_UNK_01ae911c + 0x1ae8e04);
      puVar10 = *(undefined4 **)(_UNK_01ae9120 + 0x1ae8e0c);
      do {
        iVar6 = FUN_01ae4524();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0152983c(iVar1,uVar5,*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar10);
        iVar2 = FUN_01ae6a18();
        if (iVar2 != 0) {
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = *(int *)(iVar6 + 0x18);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x026bfc74(iVar6,1,0);
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 < 0x80000000);
    }
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_01ae90d8 + 0x1ae8b68) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01ae90dc + 0x1ae8b84));
  piVar7 = *(int **)(_UNK_01ae90e0 + 0x1ae8b98);
  iVar6 = *piVar7;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar7;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x150);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0fd48(iVar1,uVar8,0);
  if (*(int *)(**(int **)(_UNK_01ae90e4 + 0x1ae8be0) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar8 = (*(code *)&UNK_05d3e9a4)(uVar8,0,0);
  return uVar8;
}

