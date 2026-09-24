
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x02c6e920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6e95c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6ec68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6ed9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6efa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c6eda0) */
/* WARNING: Removing unreachable block (ram,0x02c6edb0) */
/* WARNING: Removing unreachable block (ram,0x02c6edb4) */
/* WARNING: Removing unreachable block (ram,0x02c6edd4) */
/* WARNING: Removing unreachable block (ram,0x02c6edd8) */
/* WARNING: Removing unreachable block (ram,0x02c6ec6c) */
/* WARNING: Removing unreachable block (ram,0x02c6e960) */
/* WARNING: Removing unreachable block (ram,0x02c6eb84) */
/* WARNING: Removing unreachable block (ram,0x02c6eba4) */
/* WARNING: Removing unreachable block (ram,0x02c6ec24) */
/* WARNING: Removing unreachable block (ram,0x02c6ec70) */
/* WARNING: Removing unreachable block (ram,0x02c6ec78) */
/* WARNING: Removing unreachable block (ram,0x02c6ec7c) */
/* WARNING: Removing unreachable block (ram,0x02c6ec80) */
/* WARNING: Removing unreachable block (ram,0x02c6ec8c) */
/* WARNING: Removing unreachable block (ram,0x02c6ed38) */
/* WARNING: Removing unreachable block (ram,0x02c6ed3c) */
/* WARNING: Removing unreachable block (ram,0x02c6ed48) */
/* WARNING: Removing unreachable block (ram,0x02c6ed54) */
/* WARNING: Removing unreachable block (ram,0x02c6ed58) */
/* WARNING: Removing unreachable block (ram,0x02c6ed64) */
/* WARNING: Removing unreachable block (ram,0x02c6ed70) */
/* WARNING: Removing unreachable block (ram,0x02c6ed74) */
/* WARNING: Removing unreachable block (ram,0x02c6ef84) */
/* WARNING: Removing unreachable block (ram,0x02c6ef90) */
/* WARNING: Removing unreachable block (ram,0x02c6ef94) */
/* WARNING: Removing unreachable block (ram,0x02c6ed80) */
/* WARNING: Removing unreachable block (ram,0x02c6ed8c) */
/* WARNING: Removing unreachable block (ram,0x02c6ed90) */
/* WARNING: Removing unreachable block (ram,0x02c6ec40) */
/* WARNING: Removing unreachable block (ram,0x02c6ec58) */
/* WARNING: Removing unreachable block (ram,0x02c6ec5c) */
/* WARNING: Removing unreachable block (ram,0x02c6e924) */
/* WARNING: Removing unreachable block (ram,0x02c6e930) */
/* WARNING: Removing unreachable block (ram,0x02c6e934) */
/* WARNING: Removing unreachable block (ram,0x02c6e94c) */
/* WARNING: Removing unreachable block (ram,0x02c6e950) */
/* WARNING: Removing unreachable block (ram,0x02c6efa4) */
/* WARNING: Removing unreachable block (ram,0x02c6edec) */
/* WARNING: Removing unreachable block (ram,0x02c6ee1c) */
/* WARNING: Removing unreachable block (ram,0x02c6ee20) */
/* WARNING: Removing unreachable block (ram,0x02c6ee30) */
/* WARNING: Removing unreachable block (ram,0x02c6ef70) */
/* WARNING: Removing unreachable block (ram,0x02c6ee90) */
/* WARNING: Removing unreachable block (ram,0x02c6eea8) */
/* WARNING: Removing unreachable block (ram,0x02c6eeac) */
/* WARNING: Removing unreachable block (ram,0x02c6eeb0) */
/* WARNING: Removing unreachable block (ram,0x02c6eeb4) */
/* WARNING: Removing unreachable block (ram,0x02c6eeb8) */
/* WARNING: Removing unreachable block (ram,0x02c6eed0) */
/* WARNING: Removing unreachable block (ram,0x02c6eed4) */
/* WARNING: Removing unreachable block (ram,0x02c6eefc) */
/* WARNING: Removing unreachable block (ram,0x02c6ef00) */
/* WARNING: Removing unreachable block (ram,0x02c6ef18) */
/* WARNING: Removing unreachable block (ram,0x02c6ef30) */
/* WARNING: Removing unreachable block (ram,0x02c6ef34) */
/* WARNING: Removing unreachable block (ram,0x02c6ef50) */
/* WARNING: Removing unreachable block (ram,0x02c6ef54) */
/* WARNING: Removing unreachable block (ram,0x02c6ef64) */
/* WARNING: Removing unreachable block (ram,0x02c6ef68) */
/* WARNING: Removing unreachable block (ram,0x02c6ef6c) */
/* WARNING: Removing unreachable block (ram,0x02c6ee7c) */
/* WARNING: Removing unreachable block (ram,0x02c6ee68) */
/* WARNING: Removing unreachable block (ram,0x02c6ee58) */
/* WARNING: Removing unreachable block (ram,0x02c6ec84) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c6e498(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(iRam02c6e61c + 0x2c6e4b0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c6e620 + 0x2c6e4c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c6e624 + 0x2c6e4d0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x603a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x603a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 != (int *)0x0) {
    iVar5 = param_2[3];
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      if (iVar1 == 1) {
        func_0x014388e8();
      }
      piVar8 = *(int **)(iVar5 + 0x14);
      iVar1 = FUN_02c6b6f0(param_1);
      iVar5 = **(int **)(_UNK_02c6e628 + 0x2c6e56c);
      if (piVar8 == (int *)0x0) {
        func_0x014388e4();
      }
      if (*(int *)(*piVar8 + 0x20) == *(int *)(iVar5 + 0x20)) {
        piVar8 = (int *)func_0x014387b0(piVar8);
        if (*piVar8 != iVar1) {
          return;
        }
        iVar1 = param_2[3];
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xc) == 0) {
          func_0x014388e8();
        }
        param_2 = *(int **)(iVar1 + 0x10);
        piVar8 = (int *)**(undefined4 **)(_UNK_02c6e62c + 0x2c6e5c8);
        if (param_2 == (int *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(*param_2 + 0x20) == piVar8[8]) {
          puVar2 = (undefined4 *)func_0x014387b0(param_2);
          uVar6 = *puVar2;
          uVar4 = puVar2[1];
          pcVar7 = (char *)(_UNK_02c6da80 + 0x2c6d9cc);
          if (*pcVar7 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_02c6da84 + 0x2c6d9e0));
            *pcVar7 = '\x01';
          }
          iVar1 = func_0x02953fd4(0x6010,0);
          if (iVar1 != 0) {
            iVar1 = func_0x029540a4(0x6010,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uStack_20 = 0;
            func_0x028fd010(iVar1,param_1,uVar6,uVar4);
            return;
          }
          piVar8 = *(int **)(_UNK_02c6da88 + 0x2c6da48);
          uVar3 = *(undefined4 *)(param_1 + 0x78);
          *(undefined4 *)(param_1 + 0x7c) = uVar4;
          iVar1 = *piVar8;
          *(undefined4 *)(param_1 + 0x78) = uVar6;
          *(undefined4 *)(param_1 + 0x74) = uVar3;
          iVar1 = **(int **)(iVar1 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          *(undefined4 *)(iVar1 + 0x9c) = uVar4;
          pcVar7 = (char *)(_UNK_02c6e96c + 0x2c6e644);
          if (*pcVar7 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_02c6e970 + 0x2c6e658));
            func_0x01438628(*(undefined4 *)(_UNK_02c6e974 + 0x2c6e664));
            func_0x01438628(*(undefined4 *)(_UNK_02c6e978 + 0x2c6e670));
            func_0x01438628(*(undefined4 *)(_UNK_02c6e97c + 0x2c6e67c));
            func_0x01438628(*(undefined4 *)(_UNK_02c6e980 + 0x2c6e688));
            func_0x01438628(*(undefined4 *)(_UNK_02c6e984 + 0x2c6e694));
            func_0x01438628(*(undefined4 *)(_UNK_02c6e988 + 0x2c6e6a0));
            func_0x01438628(*(undefined4 *)(_UNK_02c6e98c + 0x2c6e6ac));
            *pcVar7 = '\x01';
          }
          iVar1 = func_0x02953fd4(0x6012,0);
          if (iVar1 != 0) {
            iVar1 = func_0x029540a4(0x6012,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
SUB_02868e1c:
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_30 = 0;
            uStack_20 = 0;
            func_0x024f56c0(&uStack_48,0,0);
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
            uStack_28 = uStack_40;
            uStack_24 = uStack_3c;
            uStack_20 = uStack_38;
            if (*(int *)(iVar1 + 0x10) != 0) {
              func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
            }
            func_0x01523a6c(&uStack_30,param_1,0);
            iVar5 = *(int *)(iVar1 + 8);
            uVar6 = *(undefined4 *)(iVar1 + 0xc);
            iVar1 = *(int *)(iVar1 + 0x10);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar4 = 2;
            if (iVar1 == 0) {
              uVar4 = 1;
            }
            uStack_50 = 0;
            uStack_4c = 0;
            func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar4);
            return;
          }
          if (*(int *)(**(int **)(_UNK_02c6e990 + 0x2c6e704) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c6e994 + 0x2c6e720));
          uVar6 = *(undefined4 *)(param_1 + 0x7c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x029a6fa8(iVar1,uVar6,0);
          piVar8 = (int *)(param_1 + 0x8c);
          *piVar8 = iVar1;
          func_0x014385cc(piVar8,iVar1);
          if (*(int *)(**(int **)(_UNK_02c6e998 + 0x2c6e768) + 0x74) == 0) {
            func_0x014387a4();
          }
          puVar2 = *(undefined4 **)(_UNK_02c6e99c + 0x2c6e784);
          iVar1 = func_0x014e9518(*puVar2);
          uVar4 = *(undefined4 *)(param_1 + 0x78);
          uVar6 = FUN_02c6b6f0(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = FUN_02bad204(iVar1,uVar4,uVar6,0);
          piVar9 = (int *)(param_1 + 0x90);
          *piVar9 = iVar1;
          func_0x014385cc(piVar9,iVar1);
          iVar1 = func_0x014e9518(*puVar2);
          uVar4 = *(undefined4 *)(param_1 + 0x78);
          uVar6 = FUN_02c6b6f0(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = FUN_02bdd468(iVar1,uVar4,uVar6,0);
          if ((*piVar8 == 0 || iVar1 == 0) || ((*piVar9 != 0 && (*(int *)(*piVar9 + 0xc) == -1)))) {
            pcVar7 = (char *)(_UNK_02c6eb50 + 0x2c6e9c4);
            if (*pcVar7 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02c6eb54 + 0x2c6e9d8));
              func_0x01438628(*(undefined4 *)(_UNK_02c6eb58 + 0x2c6e9e4));
              func_0x01438628(*(undefined4 *)(_UNK_02c6eb5c + 0x2c6e9f0));
              func_0x01438628(*(undefined4 *)(_UNK_02c6eb60 + 0x2c6e9fc));
              func_0x01438628(*(undefined4 *)(_UNK_02c6eb64 + 0x2c6ea08));
              func_0x01438628(*(undefined4 *)(_UNK_02c6eb68 + 0x2c6ea14));
              *pcVar7 = '\x01';
            }
            iVar1 = func_0x02953fd4(0x594f,0);
            if (iVar1 != 0) {
              iVar1 = func_0x029540a4(0x594f,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              goto SUB_02868e1c;
            }
            FUN_02c6da8c(param_1);
            func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb6c + 0x2c6ea7c),0);
            func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb70 + 0x2c6ea94),0);
            func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb74 + 0x2c6eaac),0);
            func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb78 + 0x2c6eac4),0);
            func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb7c + 0x2c6eadc),0);
            func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6eb80 + 0x2c6eaf4),0);
            *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x8c) = 0;
            func_0x014385cc((undefined4 *)(param_1 + 0x8c),0);
            *(undefined4 *)(param_1 + 0x90) = 0;
            func_0x014385cc((undefined4 *)(param_1 + 0x90),0);
            iVar1 = *(int *)(param_1 + 0x94);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = 0;
          }
          else {
            if (*(int *)(**(int **)(_UNK_02c6e9a0 + 0x2c6e84c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c6e9a4 + 0x2c6e868));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = 0;
            iVar1 = func_0x02e7975c(iVar1,0);
            if (iVar1 != 0) {
              if (*(int *)(**(int **)(_UNK_02c6e9a8 + 0x2c6e8a0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c6e9ac + 0x2c6e8bc));
              iVar5 = *piVar8;
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              uVar6 = FUN_02c4a818(iVar1,iVar5,0);
            }
            iVar1 = *(int *)(param_1 + 0x9c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e94d8(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
          }
          (*(code *)&UNK_05d3ec04)(iVar1,uVar6,0);
          return;
        }
      }
      else {
        func_0x01438ca8(piVar8,iVar5);
      }
      func_0x01438ca8(param_2,piVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

