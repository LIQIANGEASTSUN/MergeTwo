
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

void FUN_02c7152c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
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
  undefined4 uStack_18;
  
  pcVar5 = (char *)(_UNK_02c716c8 + 0x2c71544);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c716cc + 0x2c71558));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6020,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      piVar8 = *(int **)(_UNK_02c716d0 + 0x2c715c0);
      iVar1 = **(int **)(*piVar8 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b63a9c(iVar1,0x46,0,0);
      if (iVar1 == 0) {
        iVar1 = **(int **)(*piVar8 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_18 = 0;
        func_0x02b65c74(iVar1,0x46,0,0);
        iVar1 = **(int **)(*piVar8 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b63a9c(iVar1,0x47,0,0);
        if (iVar1 == 0) {
          iVar1 = **(int **)(*piVar8 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_18 = 0;
          func_0x02b6127c(iVar1,0x47,0,0);
          iVar1 = **(int **)(*piVar8 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02b67398(iVar1,0x47,0);
        }
      }
    }
    pcVar5 = (char *)(_UNK_02c74b6c + 0x2c748c8);
    uStack_20 = unaff_r4;
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c74b70 + 0x2c748dc));
      func_0x01438628(*(undefined4 *)(_UNK_02c74b74 + 0x2c748e8));
      func_0x01438628(*(undefined4 *)(_UNK_02c74b78 + 0x2c748f4));
      func_0x01438628(*(undefined4 *)(_UNK_02c74b7c + 0x2c74900));
      func_0x01438628(*(undefined4 *)(_UNK_02c74b80 + 0x2c7490c));
      func_0x01438628(*(undefined4 *)(_UNK_02c74b84 + 0x2c74918));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x6021,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x6021,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x024f56c0(&uStack_50,0,0,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01523a6c(&uStack_38,param_1,0);
      func_0x01523a2c(&uStack_38,0,0);
      iVar4 = *(int *)(iVar1 + 8);
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar3 = 3;
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
      return;
    }
    piVar8 = *(int **)(_UNK_02c74b88 + 0x2c74978);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar9 = *(undefined4 **)(_UNK_02c74b8c + 0x2c74994);
    iVar1 = func_0x014e9518(*puVar9);
    uVar3 = *(undefined4 *)(param_1 + 0x78);
    uVar6 = FUN_02c6b6f0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bad204(iVar1,uVar3,uVar6,0);
    if (*(int *)(**(int **)(_UNK_02c74b90 + 0x2c749dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c74b94 + 0x2c749f8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar1 + 8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_02c4b828(iVar4,uVar6,0);
    if (iVar4 == 4) {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(*puVar9);
      uVar6 = FUN_02c6b6f0(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = FUN_02baeb18(iVar4,uVar6,0);
      if (iVar4 != 0) {
        return;
      }
    }
    if (*(int *)(**(int **)(_UNK_02c74b98 + 0x2c74a98) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c74b9c + 0x2c74ab4));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar10 = func_0x026ffbe0(iVar4,0);
    uVar10 = func_0x014e6e04((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
    uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_30 = 0;
    FUN_026f7520(iVar1,uVar6,(int)uVar10,uVar6);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(*puVar9);
    uVar3 = *(undefined4 *)(param_1 + 0x78);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    uStack_2c = FUN_02c6b6f0(param_1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 9;
    uStack_28 = 0;
    FUN_02bd3648(iVar4,uVar3,uVar6,1);
    iVar1 = func_0x02953fd4(0x600f,0);
    if (iVar1 == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x78);
      uVar3 = *(undefined4 *)(param_1 + 0x7c);
      pcVar5 = (char *)(_UNK_02c6da80 + 0x2c6d9cc);
      uStack_18 = uStack_20;
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c6da84 + 0x2c6d9e0));
        *pcVar5 = '\x01';
      }
      iVar1 = func_0x02953fd4(0x6010,0);
      if (iVar1 != 0) {
        iVar1 = func_0x029540a4(0x6010,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_20 = 0;
        func_0x028fd010(iVar1,param_1,uVar6,uVar3);
        return;
      }
      piVar8 = *(int **)(_UNK_02c6da88 + 0x2c6da48);
      uVar2 = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x7c) = uVar3;
      iVar1 = *piVar8;
      *(undefined4 *)(param_1 + 0x78) = uVar6;
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      *(undefined4 *)(iVar1 + 0x9c) = uVar3;
      uStack_20 = uStack_18;
      pcVar5 = (char *)(_UNK_02c6e96c + 0x2c6e644);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c6e970 + 0x2c6e658));
        func_0x01438628(*(undefined4 *)(_UNK_02c6e974 + 0x2c6e664));
        func_0x01438628(*(undefined4 *)(_UNK_02c6e978 + 0x2c6e670));
        func_0x01438628(*(undefined4 *)(_UNK_02c6e97c + 0x2c6e67c));
        func_0x01438628(*(undefined4 *)(_UNK_02c6e980 + 0x2c6e688));
        func_0x01438628(*(undefined4 *)(_UNK_02c6e984 + 0x2c6e694));
        func_0x01438628(*(undefined4 *)(_UNK_02c6e988 + 0x2c6e6a0));
        func_0x01438628(*(undefined4 *)(_UNK_02c6e98c + 0x2c6e6ac));
        *pcVar5 = '\x01';
      }
      iVar1 = func_0x02953fd4(0x6012,0);
      if (iVar1 == 0) {
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
        puVar9 = *(undefined4 **)(_UNK_02c6e99c + 0x2c6e784);
        iVar1 = func_0x014e9518(*puVar9);
        uVar3 = *(undefined4 *)(param_1 + 0x78);
        uVar6 = FUN_02c6b6f0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02bad204(iVar1,uVar3,uVar6,0);
        piVar7 = (int *)(param_1 + 0x90);
        *piVar7 = iVar1;
        func_0x014385cc(piVar7,iVar1);
        iVar1 = func_0x014e9518(*puVar9);
        uVar3 = *(undefined4 *)(param_1 + 0x78);
        uVar6 = FUN_02c6b6f0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02bdd468(iVar1,uVar3,uVar6,0);
        uVar6 = uStack_20;
        if ((*piVar8 == 0 || iVar1 == 0) || ((*piVar7 != 0 && (*(int *)(*piVar7 + 0xc) == -1)))) {
          pcVar5 = (char *)(_UNK_02c6eb50 + 0x2c6e9c4);
          if (*pcVar5 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_02c6eb54 + 0x2c6e9d8));
            func_0x01438628(*(undefined4 *)(_UNK_02c6eb58 + 0x2c6e9e4));
            func_0x01438628(*(undefined4 *)(_UNK_02c6eb5c + 0x2c6e9f0));
            func_0x01438628(*(undefined4 *)(_UNK_02c6eb60 + 0x2c6e9fc));
            func_0x01438628(*(undefined4 *)(_UNK_02c6eb64 + 0x2c6ea08));
            func_0x01438628(*(undefined4 *)(_UNK_02c6eb68 + 0x2c6ea14));
            *pcVar5 = '\x01';
          }
          iVar1 = func_0x02953fd4(0x594f,0);
          if (iVar1 != 0) {
            iVar1 = func_0x029540a4(0x594f,0);
            uStack_18 = uVar6;
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
            iVar4 = *piVar8;
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = FUN_02c4a818(iVar1,iVar4,0);
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
      iVar1 = func_0x029540a4(0x6012,0);
      uStack_18 = uStack_20;
      if (iVar1 == 0) {
        func_0x014388e4();
        uStack_18 = uStack_20;
      }
    }
    else {
      iVar1 = func_0x029540a4(0x600f,0);
      uStack_18 = uStack_20;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6020,0);
    uStack_18 = unaff_r4;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
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
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3);
  return;
}

