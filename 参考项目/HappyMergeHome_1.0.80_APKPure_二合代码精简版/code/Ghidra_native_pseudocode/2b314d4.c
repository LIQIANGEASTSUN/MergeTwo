
/* WARNING: Removing unreachable block (ram,0x035ddf68) */
/* WARNING: Removing unreachable block (ram,0x035ddf70) */
/* WARNING: Removing unreachable block (ram,0x035ddf74) */
/* WARNING: Removing unreachable block (ram,0x035ddf7c) */
/* WARNING: Removing unreachable block (ram,0x035ddcb8) */
/* WARNING: Removing unreachable block (ram,0x035ddf98) */
/* WARNING: Removing unreachable block (ram,0x035ddf90) */
/* WARNING: Removing unreachable block (ram,0x035ddf88) */
/* WARNING: Removing unreachable block (ram,0x035ddcb0) */
/* WARNING: Removing unreachable block (ram,0x035ddca8) */
/* WARNING: Removing unreachable block (ram,0x035ddc98) */
/* WARNING: Removing unreachable block (ram,0x035ddc90) */
/* WARNING: Removing unreachable block (ram,0x035ddc88) */
/* WARNING: Removing unreachable block (ram,0x035ddc8c) */
/* WARNING: Removing unreachable block (ram,0x035ddc94) */
/* WARNING: Removing unreachable block (ram,0x035ddca4) */
/* WARNING: Removing unreachable block (ram,0x035ddcac) */
/* WARNING: Removing unreachable block (ram,0x035ddcb4) */
/* WARNING: Removing unreachable block (ram,0x035ddc84) */
/* WARNING: Removing unreachable block (ram,0x035ddf94) */
/* WARNING: Removing unreachable block (ram,0x035ddf78) */
/* WARNING: Removing unreachable block (ram,0x035ddf8c) */
/* WARNING: Removing unreachable block (ram,0x035ddf9c) */
/* WARNING: Removing unreachable block (ram,0x035ddf6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02b414d4(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int unaff_r9;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_02b415b4 + 0x2b414e8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b415b8 + 0x2b414fc));
    func_0x01438628(*(undefined4 *)(_UNK_02b415bc + 0x2b41508));
    func_0x01438628(*(undefined4 *)(_UNK_02b415c0 + 0x2b41514));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x87d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x87d,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar8 = (char *)(_UNK_02885d40 + 0x2885c60);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02885d44 + 0x2885c74),param_1,0);
      *pcVar8 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = iStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar5,0,0);
    piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02885d48 + 0x2885d30));
    return piVar1;
  }
  if (*(int *)(**(int **)(_UNK_02b415c4 + 0x2b4156c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02b415c8 + 0x2b41588));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar7 = **(int **)(_UNK_02b415cc + 0x2b415a8);
  puVar4 = *(undefined4 **)(iVar7 + 0x1c);
  if (puVar4 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam035ddc78 + 0x35dda04));
    func_0x024f83cc(*(undefined4 *)(iRam035ddc7c + 0x35dda10));
    func_0x024f83cc(*(undefined4 *)(iRam035ddc80 + 0x35dda1c));
    func_0x024f83cc(*(undefined4 *)(iRam035ddc84 + 0x35dda28));
    func_0x024f83cc(*(undefined4 *)(iRam035ddc88 + 0x35dda34));
    func_0x024f83cc(*(undefined4 *)(iRam035ddc8c + 0x35dda40));
    func_0x024f83cc(*(undefined4 *)(iRam035ddc90 + 0x35dda4c));
    func_0x024f83cc(*(undefined4 *)(iRam035ddc94 + 0x35dda58));
    puVar4 = *(undefined4 **)(iVar7 + 0x1c);
    if (puVar4 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar7);
      puVar4 = *(undefined4 **)(iVar7 + 0x1c);
    }
  }
  uVar9 = *puVar4;
  iVar10 = *(int *)(iVar2 + 0x2c);
  if (*(int *)(**(int **)(iRam035ddc98 + 0x35dda7c) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar9 = func_0x05171434(uVar9,0);
  if (iVar10 == 0) {
    func_0x024f83d4();
  }
  uVar9 = func_0x0475399c(iVar10,uVar9,**(undefined4 **)(iRam035ddc9c + 0x35ddac0));
  iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddca0 + 0x35ddadc),0);
  if (iVar10 == 0) {
    iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddca4 + 0x35ddb08),0);
    if (iVar10 == 0) {
      iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddca8 + 0x35ddb34),0);
      if (iVar10 == 0) {
        iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddcac + 0x35ddb60),0);
        if (iVar10 == 0) {
          iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddcb0 + 0x35ddb8c),0);
          if (iVar10 == 0) {
            iVar10 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddcb4 + 0x35ddbbc),0);
            uVar12 = iVar10 == 0;
            uVar11 = 1;
            if ((bool)uVar12) {
              func_0x024f83b8(*(undefined4 *)(iRam035ddcb8 + 0x35ddc3c));
              uVar5 = func_0x024f83c8();
              uVar3 = func_0x024f83b8(*(undefined4 *)(iRam035ddcbc + 0x35ddc50));
              uStack_20 = 0;
              func_0x0509473c(uVar5,uVar3,uVar9,0);
              func_0x024f83c0(uVar5,iVar7);
              uVar13 = func_0x024f83bc();
              iVar10 = (int)((ulonglong)uVar13 >> 0x20);
              iVar2 = (int)uVar13;
              if ((bool)uVar12) {
                    /* WARNING: Could not recover jumptable at 0x035ddc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                piVar1 = (int *)(*(code *)(unaff_r9 - (int)(&UNK_01200000 + !(bool)uVar11)))();
                return piVar1;
              }
                    /* WARNING: Could not recover jumptable at 0x035ddc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uStack_24 = 0x35ddc78;
              uStack_2c = 0;
              puVar4 = *(undefined4 **)(iVar10 + 0x1c);
              iStack_38 = iVar7;
              uStack_34 = uVar5;
              uStack_30 = uVar9;
              if (puVar4 == (undefined4 *)0x0) {
                func_0x024f83cc(*(undefined4 *)(iRam035ddf5c + 0x35ddce8));
                func_0x024f83cc(*(undefined4 *)(iRam035ddf60 + 0x35ddcf4));
                func_0x024f83cc(*(undefined4 *)(iRam035ddf64 + 0x35ddd00));
                func_0x024f83cc(*(undefined4 *)(iRam035ddf68 + 0x35ddd0c));
                func_0x024f83cc(*(undefined4 *)(iRam035ddf6c + 0x35ddd18));
                func_0x024f83cc(*(undefined4 *)(iRam035ddf70 + 0x35ddd24));
                func_0x024f83cc(*(undefined4 *)(iRam035ddf74 + 0x35ddd30));
                func_0x024f83cc(*(undefined4 *)(iRam035ddf78 + 0x35ddd3c));
                puVar4 = *(undefined4 **)(iVar10 + 0x1c);
                if (puVar4 == (undefined4 *)0x0) {
                  func_0x024f83f8(iVar10);
                  puVar4 = *(undefined4 **)(iVar10 + 0x1c);
                }
              }
              uVar9 = *puVar4;
              iVar7 = *(int *)(iVar2 + 0x2c);
              if (*(int *)(**(int **)(iRam035ddf7c + 0x35ddd60) + 0x74) == 0) {
                func_0x024f83d8();
              }
              uVar9 = func_0x05171434(uVar9,0);
              if (iVar7 == 0) {
                func_0x024f83d4();
              }
              uVar9 = func_0x0475399c(iVar7,uVar9,**(undefined4 **)(iRam035ddf80 + 0x35ddda4));
              iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddf84 + 0x35dddc0),0);
              if (iVar7 == 0) {
                iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddf88 + 0x35dddec),0);
                if (iVar7 == 0) {
                  iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddf8c + 0x35dde18),0);
                  if (iVar7 == 0) {
                    iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddf90 + 0x35dde44),0);
                    if (iVar7 == 0) {
                      iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddf94 + 0x35dde70),0);
                      if (iVar7 == 0) {
                        iVar7 = func_0x04f57738(uVar9,**(undefined4 **)(iRam035ddf98 + 0x35ddea0),0)
                        ;
                        uVar12 = iVar7 == 0;
                        uVar11 = 1;
                        if ((bool)uVar12) {
                          func_0x024f83b8(*(undefined4 *)(iRam035ddf9c + 0x35ddf20));
                          uVar5 = func_0x024f83c8();
                          uVar3 = func_0x024f83b8(*(undefined4 *)(iRam035ddfa0 + 0x35ddf34));
                          uStack_40 = 0;
                          func_0x0509473c(uVar5,uVar3,uVar9,0);
                          func_0x024f83c0(uVar5,iVar10);
                          iVar2 = func_0x024f83bc();
                          if ((bool)uVar12) {
                    /* WARNING: Could not recover jumptable at 0x035ddf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            piVar1 = (int *)(*(code *)(unaff_r9 - (!(bool)uVar11 + 0x64000000)))();
                            return piVar1;
                          }
                    /* WARNING: Could not recover jumptable at 0x035ddf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x035ddf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uStack_44 = 0x35ddf5c;
                          piVar1 = *(int **)(iVar2 + 0x1c);
                          if (piVar1 == (int *)0x0) {
                            func_0x024f83f8(iVar2);
                            piVar1 = *(int **)(iVar2 + 0x1c);
                          }
                          if ((*(ushort *)(*piVar1 + 0xbd) & 1) == 0) {
                            func_0x024f83fc();
                          }
                          piVar1 = (int *)func_0x024f83c8();
                          (*(code *)**(undefined4 **)(*(int *)(iVar2 + 0x1c) + 4))(piVar1);
                          return piVar1;
                        }
                        iVar7 = *(int *)(iVar10 + 0x1c);
                        piVar1 = *(int **)(iVar2 + 0x28);
                      }
                      else {
                        iVar7 = *(int *)(iVar10 + 0x1c);
                        piVar1 = *(int **)(iVar2 + 0x24);
                      }
                    }
                    else {
                      iVar7 = *(int *)(iVar10 + 0x1c);
                      piVar1 = *(int **)(iVar2 + 0x20);
                    }
                  }
                  else {
                    iVar7 = *(int *)(iVar10 + 0x1c);
                    piVar1 = *(int **)(iVar2 + 0x1c);
                  }
                }
                else {
                  iVar7 = *(int *)(iVar10 + 0x1c);
                  piVar1 = *(int **)(iVar2 + 0x18);
                }
              }
              else {
                iVar7 = *(int *)(iVar10 + 0x1c);
                piVar1 = *(int **)(iVar2 + 0x14);
              }
              iVar2 = *(int *)(iVar7 + 4);
              if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                iVar2 = func_0x024f83fc(iVar2);
              }
              piVar6 = (int *)0x0;
              if (piVar1 != (int *)0x0) {
                if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
                   (piVar6 = piVar1,
                   *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) !=
                   iVar2)) {
                  piVar6 = (int *)0x0;
                }
              }
              return piVar6;
            }
            iVar7 = *(int *)(iVar7 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
          }
          else {
            iVar7 = *(int *)(iVar7 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x24);
          }
        }
        else {
          iVar7 = *(int *)(iVar7 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x20);
        }
      }
      else {
        iVar7 = *(int *)(iVar7 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x1c);
      }
    }
    else {
      iVar7 = *(int *)(iVar7 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x18);
    }
  }
  else {
    iVar7 = *(int *)(iVar7 + 0x1c);
    piVar1 = *(int **)(iVar2 + 0x14);
  }
  iVar2 = *(int *)(iVar7 + 4);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x024f83fc(iVar2);
  }
  piVar6 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
       (piVar6 = piVar1,
       *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
      piVar6 = (int *)0x0;
    }
  }
  return piVar6;
}

