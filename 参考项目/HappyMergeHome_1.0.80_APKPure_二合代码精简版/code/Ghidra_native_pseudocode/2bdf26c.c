
/* WARNING: Possible PIC construction at 0x02bef53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c28428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bef540) */
/* WARNING: Removing unreachable block (ram,0x02bef54c) */
/* WARNING: Removing unreachable block (ram,0x02bef550) */
/* WARNING: Removing unreachable block (ram,0x02bef56c) */
/* WARNING: Removing unreachable block (ram,0x02bef570) */
/* WARNING: Removing unreachable block (ram,0x02bef58c) */
/* WARNING: Removing unreachable block (ram,0x02bef590) */
/* WARNING: Removing unreachable block (ram,0x02bef5b0) */
/* WARNING: Removing unreachable block (ram,0x02bef5b4) */
/* WARNING: Removing unreachable block (ram,0x02bef5c8) */
/* WARNING: Removing unreachable block (ram,0x02bef5cc) */
/* WARNING: Removing unreachable block (ram,0x02bef5e4) */
/* WARNING: Removing unreachable block (ram,0x02bef5fc) */
/* WARNING: Removing unreachable block (ram,0x02bef600) */
/* WARNING: Removing unreachable block (ram,0x02bef61c) */
/* WARNING: Removing unreachable block (ram,0x02bef620) */
/* WARNING: Removing unreachable block (ram,0x02bef648) */
/* WARNING: Removing unreachable block (ram,0x02bef64c) */
/* WARNING: Removing unreachable block (ram,0x02bef66c) */
/* WARNING: Removing unreachable block (ram,0x02bef670) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bef26c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02bef688 + 0x2bef284);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bef68c + 0x2bef298));
    func_0x01438628(*(undefined4 *)(_UNK_02bef690 + 0x2bef2a4));
    func_0x01438628(*(undefined4 *)(_UNK_02bef694 + 0x2bef2b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bef698 + 0x2bef2bc));
    func_0x01438628(*(undefined4 *)(_UNK_02bef69c + 0x2bef2c8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2197,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2197,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&iStack_38,param_1,0);
    func_0x01523a2c(&iStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&iStack_38,uVar3,0,0);
    return;
  }
  piVar7 = *(int **)(_UNK_02bef6a0 + 0x2bef324);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02bef6a4 + 0x2bef340);
  iVar5 = func_0x014e9518(*puVar8);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar2 = FUN_02bad204(iVar5,param_2,iVar1,0);
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + 8);
    iVar1 = iVar2;
  }
  if (iVar2 != 0 && iVar5 != -1) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(*puVar8);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = FUN_02bd11ec(iVar5,iVar1,0);
    if (iVar5 == 0) {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(*puVar8);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = FUN_02be8400(iVar5,iVar1,0);
      if (iVar5 == 0) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(*puVar8);
        uVar6 = *(undefined4 *)(param_1 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = FUN_02bd158c(iVar5,param_2,uVar6,0);
        if (iVar5 == 0) {
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar8);
          uVar6 = *(undefined4 *)(param_1 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = FUN_02bad168(iVar5,param_2,uVar6,0);
          if (iVar5 == 0) {
            iVar5 = *(int *)(param_1 + 0x44);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar5 + 0xc) <= param_2) {
              func_0x014388e8();
            }
            iVar5 = *(int *)(iVar5 + param_2 * 4 + 0x10);
            if (iVar5 != 0) {
              uVar3 = *(undefined4 *)(iVar5 + 0xc);
              if (*(int *)(**(int **)(_UNK_02bef6a8 + 0x2bef4e0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x024eec50(uVar3,0,0);
              if (iVar2 == 0) {
                uStack_30 = func_0x02c3f4b4(iVar5,0);
                iVar2 = *(int *)(iVar5 + 0xc);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                uStack_24 = 0x2bef540;
                iStack_38 = iVar1;
                iStack_34 = iVar5;
                iStack_2c = iVar2;
                uStack_28 = uVar6;
                iVar1 = func_0x02953fd4(0x219c,0,0,0);
                if (iVar1 != 0) {
                  iVar1 = func_0x029540a4(0x219c,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  uStack_40 = 0;
                  func_0x0287b7c0(iVar1,iVar2,0,0);
                  return;
                }
                if (*(int *)(iVar2 + 0x8c) == 0) {
                  iVar1 = *(int *)(iVar2 + 0x48);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x014e94d8(iVar1,0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                }
                else {
                  iVar1 = func_0x014e94d8(*(int *)(iVar2 + 0x8c),0);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                }
                (*(code *)&UNK_05d3ec04)(iVar1,0,0);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}

