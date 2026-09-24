
/* WARNING: Possible PIC construction at 0x01b5a820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b5a824) */
/* WARNING: Removing unreachable block (ram,0x01b5a830) */
/* WARNING: Removing unreachable block (ram,0x01b5a840) */
/* WARNING: Removing unreachable block (ram,0x01b5a844) */
/* WARNING: Removing unreachable block (ram,0x01b5a860) */
/* WARNING: Removing unreachable block (ram,0x01b5a868) */
/* WARNING: Removing unreachable block (ram,0x01b5a890) */
/* WARNING: Removing unreachable block (ram,0x01b5a894) */
/* WARNING: Removing unreachable block (ram,0x01b5a8ac) */
/* WARNING: Removing unreachable block (ram,0x01b5a8b8) */
/* WARNING: Removing unreachable block (ram,0x01b5a8c4) */
/* WARNING: Removing unreachable block (ram,0x01b5a8c8) */
/* WARNING: Removing unreachable block (ram,0x01b5a8e0) */
/* WARNING: Removing unreachable block (ram,0x01b5a8e4) */
/* WARNING: Removing unreachable block (ram,0x01b5a90c) */
/* WARNING: Removing unreachable block (ram,0x01b5a910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b5a600(int *param_1)

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
  
  pcVar4 = (char *)(_UNK_01b5acb8 + 0x1b5a618);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5acbc + 0x1b5a62c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5acc0 + 0x1b5a638));
    func_0x01438628(*(undefined4 *)(_UNK_01b5acc4 + 0x1b5a644));
    func_0x01438628(*(undefined4 *)(_UNK_01b5acc8 + 0x1b5a650));
    func_0x01438628(*(undefined4 *)(_UNK_01b5accc + 0x1b5a65c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5acd0 + 0x1b5a668));
    func_0x01438628(*(undefined4 *)(_UNK_01b5acd4 + 0x1b5a674));
    func_0x01438628(*(undefined4 *)(_UNK_01b5acd8 + 0x1b5a680));
    func_0x01438628(*(undefined4 *)(_UNK_01b5acdc + 0x1b5a68c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ace0 + 0x1b5a698));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ace4 + 0x1b5a6a4));
    func_0x01438628(*(undefined4 *)(_UNK_01b5ace8 + 0x1b5a6b0));
    func_0x01438628(*(undefined4 *)(_UNK_01b5acec + 0x1b5a6bc));
    func_0x01438628(*(undefined4 *)(_UNK_01b5acf0 + 0x1b5a6c8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1897,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1897,0);
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
  piVar7 = *(int **)(_UNK_01b5acf4 + 0x1b5a724);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_01b5acf8 + 0x1b5a740);
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
  iVar1 = FUN_01b595ec();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    if (iVar1 == 0) {
      iVar1 = FUN_01b57128();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01b5ad10 + 0x1b5aadc));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b5ad14 + 0x1b5aaf4));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_01b5ad18 + 0x1b5ab0c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(int *)(iVar1 + 0xc) - 1;
      if (-1 < (int)uVar5) {
        uVar8 = 0;
        puVar9 = *(undefined4 **)(_UNK_01b5ad1c + 0x1b5ab3c);
        puVar10 = *(undefined4 **)(_UNK_01b5ad20 + 0x1b5ab44);
        piVar7 = *(int **)(_UNK_01b5ad24 + 0x1b5ab4c);
        do {
          iVar6 = FUN_01b57128();
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar3 = func_0x0152983c(iVar1,uVar5,*puVar9);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f04d4(iVar6,uVar3,*puVar10);
          iVar2 = FUN_01b58f74();
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
              if (*(int *)(**(int **)(_UNK_01b5ad28 + 0x1b5abf0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01b5ad2c + 0x1b5ac0c));
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar8 = func_0x02b0c90c(iVar6,uVar8,0,0);
              if (*(int *)(**(int **)(_UNK_01b5ad30 + 0x1b5ac64) + 0x74) == 0) {
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
      iVar1 = FUN_01b57128();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar8 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01b5ad34 + 0x1b5a9cc));
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01b5ad38 + 0x1b5a9e4));
      func_0x024f108c(iVar1,uVar8,**(undefined4 **)(_UNK_01b5ad3c + 0x1b5a9fc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(int *)(iVar1 + 0xc) - 1;
      if ((int)uVar5 < 0) {
        return 0;
      }
      puVar9 = *(undefined4 **)(_UNK_01b5ad40 + 0x1b5aa28);
      puVar10 = *(undefined4 **)(_UNK_01b5ad44 + 0x1b5aa30);
      do {
        iVar6 = FUN_01b57128();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x0152983c(iVar1,uVar5,*puVar9);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x024f04d4(iVar6,uVar8,*puVar10);
        iVar2 = FUN_01b58f74();
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
  if (*(int *)(**(int **)(_UNK_01b5acfc + 0x1b5a78c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01b5ad00 + 0x1b5a7a8));
  piVar7 = *(int **)(_UNK_01b5ad04 + 0x1b5a7bc);
  iVar6 = *piVar7;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar7;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x14c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x02b0fd48(iVar1,uVar8,0);
  if (*(int *)(**(int **)(_UNK_01b5ad08 + 0x1b5a804) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar8 = (*(code *)&UNK_05d3e9a4)(uVar8,0,0);
  return uVar8;
}

