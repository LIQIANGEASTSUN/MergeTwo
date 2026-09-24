
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x02c766a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02868ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c76718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c7678c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c76824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c768a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c768e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c768fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c7694c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c769dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c76a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c76ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c76b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6ec58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6ed38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6ed70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6edb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6edd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6ee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c76c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c76b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c76bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c76bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02aef378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02aef458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02a33654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02869338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b0528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6eefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6ef50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c76c3c) */
/* WARNING: Removing unreachable block (ram,0x02c76c40) */
/* WARNING: Removing unreachable block (ram,0x014b052c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_02c76590(float param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float unaff_r4;
  float unaff_r5;
  char *pcVar6;
  float *pfVar7;
  int unaff_r6;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 unaff_r11;
  undefined *unaff_lr;
  bool bVar13;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(iRam02c76c3c + 0x2c765a8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c76c40 + 0x2c765bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c44 + 0x2c765c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c48 + 0x2c765d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c4c + 0x2c765e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c50 + 0x2c765ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c54 + 0x2c765f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c58 + 0x2c76604));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c5c + 0x2c76610));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c60 + 0x2c7661c));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c64 + 0x2c76628));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c68 + 0x2c76634));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c6c + 0x2c76640));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c70 + 0x2c7664c));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c74 + 0x2c76658));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c78 + 0x2c76664));
    func_0x01438628(*(undefined4 *)(_UNK_02c76c7c + 0x2c76670));
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x6022,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x6022,0);
    if (iVar4 == 0) {
      unaff_lr = (undefined *)0x2c766a8;
      unaff_r4 = param_1;
      unaff_r5 = 0.0;
      register0x00000054 = (BADSPACEBASE *)&iStack_50;
      goto SUB_014388e4;
    }
SUB_02868e1c:
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = fStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    if (*(int *)(iVar4 + 8) != 0) {
      uVar5 = 2;
      if (*(float *)(iVar4 + 0x10) == 0.0) {
        uVar5 = 1;
      }
      iStack_50 = 0;
      fStack_4c = 0.0;
      fVar1 = (float)func_0x024f56d0(*(int *)(iVar4 + 8),*(int *)(iVar4 + 0xc),&uStack_30,uVar5);
      return fVar1;
    }
    unaff_lr = (undefined *)0x2868ea8;
    unaff_r4 = *(float *)(iVar4 + 0x10);
    unaff_r5 = 0.0;
    unaff_r6 = *(int *)(iVar4 + 0xc);
    register0x00000054 = (BADSPACEBASE *)&iStack_50;
    goto SUB_014388e4;
  }
  fVar1 = (float)func_0x024ef5b8(0);
  if (fVar1 - *(float *)((int)param_1 + 0x84) < _UNK_02c76a40) {
    return fVar1;
  }
  iVar4 = *(int *)((int)param_1 + 0x8c);
  if (iVar4 == 0) {
    return 0.0;
  }
  fVar1 = *(float *)(iVar4 + 0x50);
  if (0 < (int)fVar1) {
    iVar8 = **(int **)(**(int **)(_UNK_02c76c80 + 0x2c76708) + 0x5c);
    if (iVar8 == 0) {
      unaff_lr = (undefined *)0x2c7671c;
      unaff_r4 = param_1;
      unaff_r5 = fVar1;
      unaff_r6 = iVar8;
      register0x00000054 = (BADSPACEBASE *)&iStack_50;
      goto SUB_014388e4;
    }
    iVar4 = func_0x02e61e0c(iVar8,0x66,fVar1,0);
    if (iVar4 == 0) {
      param_1 = (float)func_0x014388d4(**(undefined4 **)(_UNK_02c76c84 + 0x2c76b4c));
      func_0x02a32c7c(param_1,0);
      if (*(int *)(**(int **)(_UNK_02c76c88 + 0x2c76b68) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x0202bb70(0);
      if (iVar4 == 0) {
        unaff_lr = (undefined *)0x2c76b90;
        unaff_r4 = param_1;
        unaff_r5 = 0.0;
        unaff_r6 = iVar8;
        register0x00000054 = (BADSPACEBASE *)&iStack_50;
        goto SUB_014388e4;
      }
      fVar1 = (float)func_0x0202bc14(iVar4,**(undefined4 **)(_UNK_02c76c8c + 0x2c76ba0),0);
      if (param_1 == 0.0) {
        unaff_lr = (undefined *)0x2c76bb8;
        unaff_r4 = param_1;
        unaff_r5 = fVar1;
        unaff_r6 = iVar8;
        register0x00000054 = (BADSPACEBASE *)&iStack_50;
        goto SUB_014388e4;
      }
      *(float *)((int)param_1 + 0xc) = fVar1;
      func_0x014385cc((float *)((int)param_1 + 0xc),fVar1);
      iVar4 = func_0x0202bb70(0);
      if (iVar4 == 0) {
        unaff_lr = (undefined *)0x2c76be0;
        unaff_r4 = param_1;
        unaff_r5 = 0.0;
        unaff_r6 = iVar8;
        register0x00000054 = (BADSPACEBASE *)&iStack_50;
        goto SUB_014388e4;
      }
      uVar5 = func_0x0202bc14(iVar4,**(undefined4 **)(_UNK_02c76c90 + 0x2c76bf0),0);
      *(undefined4 *)((int)param_1 + 0x14) = uVar5;
      func_0x014385cc();
      if (*(int *)(**(int **)(_UNK_02c76c94 + 0x2c76c14) + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar6 = (char *)(_UNK_02aef4a4 + 0x2aef300);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02aef4a8 + 0x2aef314),0);
        func_0x01438628(*(undefined4 *)(_UNK_02aef4ac + 0x2aef320));
        func_0x01438628(*(undefined4 *)(_UNK_02aef4b0 + 0x2aef32c));
        func_0x01438628(*(undefined4 *)(_UNK_02aef4b4 + 0x2aef338));
        func_0x01438628(*(undefined4 *)(_UNK_02aef4b8 + 0x2aef344));
        *pcVar6 = '\x01';
      }
      iVar4 = func_0x02953fd4(0xb61,0);
      if (iVar4 == 0) {
        if (*(int *)(**(int **)(_UNK_02aef4bc + 0x2aef39c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02aef4c0 + 0x2aef3b8));
        piVar12 = *(int **)(_UNK_02aef4c4 + 0x2aef3cc);
        iVar8 = *piVar12;
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x014387a4();
          iVar8 = *piVar12;
        }
        iVar9 = **(int **)(_UNK_02aef4c8 + 0x2aef3ec);
        iVar2 = *(int *)(iVar9 + 0x1c);
        iVar8 = *(int *)(*(int *)(iVar8 + 0x5c) + 0xc);
        if (iVar2 == 0) {
          func_0x014909d8(iVar9);
          iVar2 = *(int *)(iVar9 + 0x1c);
        }
        iVar2 = *(int *)(iVar2 + 8);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x0149097c();
        }
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x0149097c();
        }
        if (iVar4 == 0) {
          unaff_lr = (undefined *)0x2aef45c;
          unaff_r4 = param_1;
          unaff_r5 = 0.0;
          unaff_r6 = iVar8;
          register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
        }
        else {
          iVar4 = func_0x02b0c90c(iVar4,iVar8,**(undefined4 **)(iVar2 + 0x5c),0);
          if ((iVar4 == 0) ||
             (fVar1 = (float)func_0x035e8140(iVar4,**(undefined4 **)(_UNK_02aef4cc + 0x2aef484)),
             fVar1 == 0.0)) {
            return 0.0;
          }
          iVar4 = func_0x02953fd4(0xb62,0,0);
          if (iVar4 == 0) {
            pfVar7 = (float *)((int)fVar1 + 0x54);
            *pfVar7 = param_1;
            func_0x014385cc(pfVar7,param_1);
            func_0x02a336a0(fVar1);
            if (*pfVar7 != 0.0) {
              return *pfVar7;
            }
          }
          else {
            iVar4 = func_0x029540a4(0xb62,0);
            if (iVar4 == 0) {
              unaff_lr = (undefined *)0x2a33658;
              unaff_r6 = 0;
              unaff_r4 = fVar1;
              unaff_r5 = param_1;
              register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
            }
            else {
              uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              iStack_38 = 0;
              uStack_28 = 0;
              func_0x024f56c0(&iStack_50,0,param_1,0);
              iStack_38 = iStack_50;
              uStack_34 = fStack_4c;
              uStack_30 = uStack_48;
              uStack_2c = uStack_44;
              uStack_28 = fStack_40;
              if (*(int *)(iVar4 + 0x10) != 0) {
                func_0x01523a6c(&iStack_38,*(int *)(iVar4 + 0x10),0);
              }
              func_0x01523a6c(&iStack_38,fVar1,0);
              func_0x01523a6c(&iStack_38,param_1,0);
              unaff_r6 = *(int *)(iVar4 + 0xc);
              if (*(int *)(iVar4 + 8) != 0) {
                uVar5 = 3;
                if (*(float *)(iVar4 + 0x10) == 0.0) {
                  uVar5 = 2;
                }
                uStack_58 = 0;
                uStack_54 = 0;
                fVar1 = (float)func_0x024f56d0(*(int *)(iVar4 + 8),unaff_r6,&iStack_38,uVar5);
                return fVar1;
              }
              unaff_lr = (undefined *)0x286933c;
              unaff_r5 = 0.0;
              unaff_r4 = *(float *)(iVar4 + 0x10);
              register0x00000054 = (BADSPACEBASE *)&uStack_58;
            }
          }
        }
        goto SUB_014388e4;
      }
      iVar4 = func_0x029540a4(0xb61,0);
      if (iVar4 == 0) {
        unaff_lr = (undefined *)0x2aef37c;
        unaff_r4 = param_1;
        unaff_r5 = 0.0;
        register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
        goto SUB_014388e4;
      }
      goto SUB_02868e1c;
    }
    iVar4 = *(int *)((int)param_1 + 0x8c);
    if (iVar4 == 0) {
      unaff_lr = (undefined *)0x2c76c3c;
      unaff_r4 = param_1;
      unaff_r5 = fVar1;
      unaff_r6 = iVar8;
      register0x00000054 = (BADSPACEBASE *)&iStack_50;
      goto SUB_014388e4;
    }
  }
  if (0 < *(int *)(iVar4 + 0x50)) {
    if (*(int *)(**(int **)(_UNK_02c76c98 + 0x2c7675c) + 0x74) == 0) {
      func_0x014387a4();
    }
    unaff_r5 = (float)func_0x014e9518(**(undefined4 **)(_UNK_02c76c9c + 0x2c76778));
    if (*(int *)((int)param_1 + 0x8c) == 0) {
      unaff_lr = (undefined *)0x2c76790;
      unaff_r4 = param_1;
      unaff_r6 = 0;
      register0x00000054 = (BADSPACEBASE *)&iStack_50;
      goto SUB_014388e4;
    }
    uVar5 = *(undefined4 *)(*(int *)((int)param_1 + 0x8c) + 0x50);
    if (unaff_r5 == 0.0) {
      func_0x014388e4();
    }
    iStack_50 = 0x13;
    uStack_30 = 0;
    fStack_4c = 0.0;
    uStack_48 = 0;
    uStack_44 = 0;
    fStack_40 = 0.0;
    uStack_3c = 0;
    iStack_38 = 0;
    uStack_34 = 0;
    func_0x029c907c(unaff_r5,0x66,uVar5);
  }
  piVar12 = *(int **)(_UNK_02c76ca0 + 0x2c767e8);
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar10 = *(undefined4 **)(_UNK_02c76ca4 + 0x2c76804);
  iVar4 = func_0x014e9518(*puVar10);
  iVar8 = *(int *)((int)param_1 + 0x78);
  uVar5 = FUN_02c6b6f0(param_1);
  if (iVar4 == 0) {
    unaff_lr = (undefined *)0x2c76828;
    unaff_r4 = param_1;
    unaff_r5 = 0.0;
    unaff_r6 = iVar8;
    register0x00000054 = (BADSPACEBASE *)&iStack_50;
    goto SUB_014388e4;
  }
  iVar4 = FUN_02bdd468(iVar4,iVar8,uVar5,0);
  if (iVar4 != 0) {
    iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02c76ca8 + 0x2c76850));
    func_0x02c790bc(iVar4,0);
    FUN_02c6e9b0(param_1);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x014387a4();
    }
    unaff_r6 = func_0x014e9518(*puVar10);
    uVar5 = *(undefined4 *)((int)param_1 + 0x80);
    unaff_r5 = (float)FUN_02c6b6f0(param_1);
    if (unaff_r6 == 0) {
      unaff_lr = (undefined *)0x2c768a4;
      unaff_r4 = param_1;
      register0x00000054 = (BADSPACEBASE *)&iStack_50;
    }
    else {
      iStack_50 = 0;
      fStack_4c = 0.0;
      FUN_02be0bf4(unaff_r6,uVar5,unaff_r5,1);
      iVar8 = **(int **)(**(int **)(_UNK_02c76cac + 0x2c768d0) + 0x5c);
      if (iVar8 == 0) {
        unaff_lr = (undefined *)0x2c768e4;
        unaff_r4 = param_1;
        unaff_r5 = 0.0;
        register0x00000054 = (BADSPACEBASE *)&iStack_50;
      }
      else {
        unaff_r5 = (float)FUN_02c5036c(iVar8,0);
        if (iVar4 == 0) {
          unaff_lr = (undefined *)0x2c76900;
          unaff_r4 = param_1;
          register0x00000054 = (BADSPACEBASE *)&iStack_50;
        }
        else {
          *(float *)(iVar4 + 8) = unaff_r5;
          func_0x014385cc((float *)(iVar4 + 8),unaff_r5);
          if (*(int *)(**(int **)(_UNK_02c76cb0 + 0x2c7691c) + 0x74) == 0) {
            func_0x014387a4();
          }
          unaff_r6 = func_0x014e9518(**(undefined4 **)(_UNK_02c76cb4 + 0x2c76938));
          if (*(int *)((int)param_1 + 0x80) == 0) {
            unaff_lr = (undefined *)0x2c76950;
            unaff_r4 = param_1;
            unaff_r5 = 0.0;
            register0x00000054 = (BADSPACEBASE *)&iStack_50;
          }
          else {
            uStack_28 = *(undefined4 *)(*(int *)((int)param_1 + 0x80) + 8);
            pcVar6 = (char *)(_UNK_02c76cb8 + 0x2c76960);
            if (*pcVar6 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02c76cbc + 0x2c76978));
              *pcVar6 = '\x01';
            }
            puVar10 = *(undefined4 **)(**(int **)(_UNK_02c76cc0 + 0x2c7698c) + 0x5c);
            unaff_r5 = *(float *)(iVar4 + 8);
            unaff_r11 = *puVar10;
            uVar5 = puVar10[1];
            iVar8 = puVar10[2];
            unaff_r4 = (float)func_0x014388d4(**(undefined4 **)(_UNK_02c76cc4 + 0x2c7699c));
            func_0x0152e3ec(unaff_r4,iVar4,**(undefined4 **)(_UNK_02c76cc8 + 0x2c769cc),0);
            if (unaff_r6 != 0) {
              uStack_48 = 0x3f8ccccd;
              uStack_44 = 0x3f4ccccd;
              uStack_3c = 1;
              uStack_30 = 0;
              uStack_2c = 0;
              iStack_38 = 0x3f800000;
              uStack_34 = 0x3f333333;
              iStack_50 = iVar8;
              fStack_4c = unaff_r5;
              fStack_40 = unaff_r4;
              fVar1 = (float)func_0x02b801d4(unaff_r6,uStack_28,unaff_r11,uVar5);
              return fVar1;
            }
            unaff_lr = (undefined *)0x2c769e0;
            register0x00000054 = (BADSPACEBASE *)&iStack_50;
          }
        }
      }
    }
    goto SUB_014388e4;
  }
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x014e9518(*puVar10);
  uVar11 = *(undefined4 *)((int)param_1 + 0x78);
  uVar5 = *(undefined4 *)((int)param_1 + 0x80);
  iVar8 = FUN_02c6b6f0(param_1);
  if (iVar4 == 0) {
    unaff_lr = (undefined *)0x2c76a84;
    unaff_r4 = param_1;
    unaff_r5 = 0.0;
    unaff_r6 = iVar8;
    register0x00000054 = (BADSPACEBASE *)&iStack_50;
    goto SUB_014388e4;
  }
  uStack_48 = 0xffffffff;
  fStack_4c = 1.4013e-45;
  uStack_44 = 0;
  iStack_50 = iVar8;
  FUN_02bd1a34(iVar4,uVar11,uVar5,9);
  FUN_02c6d9ac(param_1,*(undefined4 *)((int)param_1 + 0x78),*(undefined4 *)((int)param_1 + 0x7c));
  iVar4 = **(int **)(**(int **)(_UNK_02c76ccc + 0x2c76ad0) + 0x5c);
  if (iVar4 == 0) {
    unaff_lr = (undefined *)0x2c76ae4;
    unaff_r4 = param_1;
    unaff_r5 = 0.0;
    unaff_r6 = iVar8;
    register0x00000054 = (BADSPACEBASE *)&iStack_50;
    goto SUB_014388e4;
  }
  iVar4 = FUN_02c3d868(iVar4,0);
  if (iVar4 == 0) {
    unaff_lr = (undefined *)0x2c76b08;
    unaff_r4 = param_1;
    unaff_r5 = 0.0;
    unaff_r6 = *(int *)((int)param_1 + 0x78);
    register0x00000054 = (BADSPACEBASE *)&iStack_50;
    goto SUB_014388e4;
  }
  iStack_50 = 0;
  fStack_4c = 0.0;
  FUN_02bee8e8(iVar4,*(int *)((int)param_1 + 0x78),0,1);
  func_0x02c76cd0(param_1,*(undefined4 *)((int)param_1 + 0x7c));
  pcVar6 = (char *)(_UNK_02c6efa8 + 0x2c6eb9c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c6efac + 0x2c6ebb0));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efb0 + 0x2c6ebbc));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efb4 + 0x2c6ebc8));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efb8 + 0x2c6ebd4));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efbc + 0x2c6ebe0));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efc0 + 0x2c6ebec));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efc4 + 0x2c6ebf8));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efc8 + 0x2c6ec04));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efcc + 0x2c6ec10));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efd0 + 0x2c6ec1c));
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x6013,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x6013,0);
    if (iVar4 != 0) {
      fVar1 = (float)func_0x02868e1c(iVar4,param_1,0);
      return fVar1;
    }
    unaff_lr = (undefined *)0x2c6ec5c;
    unaff_r4 = param_1;
    unaff_r5 = 0.0;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
    goto SUB_014388e4;
  }
  bVar13 = *(int *)((int)param_1 + 0x8c) != 0;
  fVar1 = 0.0;
  if (bVar13) {
    fVar1 = *(float *)((int)param_1 + 0x90);
  }
  if (!bVar13 || fVar1 == 0.0) {
    return fVar1;
  }
  FUN_02c6da8c(param_1);
  FUN_02c6effc(param_1);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efd4 + 0x2c6ecac),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efd8 + 0x2c6ecc4),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efdc + 0x2c6ecdc),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efe0 + 0x2c6ecf4),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efe4 + 0x2c6ed0c),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efe8 + 0x2c6ed24),0);
  if (*(int *)((int)param_1 + 0x8c) == 0) {
    unaff_lr = (undefined *)0x2c6ed3c;
    unaff_r4 = param_1;
    unaff_r5 = 0.0;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
    goto SUB_014388e4;
  }
  if (*(int *)(*(int *)((int)param_1 + 0x8c) + 0x1c) == 0x13) {
LAB_02c6ed80:
    iVar4 = *(int *)((int)param_1 + 0x94);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar4,1,0);
    unaff_r5 = *(float *)((int)param_1 + 0x98);
    if (*(int *)((int)param_1 + 0x90) == 0) {
      unaff_lr = (undefined *)0x2c6edb4;
      unaff_r4 = param_1;
      unaff_r6 = 0;
      register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
      goto SUB_014388e4;
    }
    unaff_r6 = func_0x01524ffc(&stack0xffffffec,0);
    if (unaff_r5 == 0.0) {
      unaff_lr = (undefined *)0x2c6edd8;
      unaff_r4 = param_1;
      register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
      goto SUB_014388e4;
    }
    func_0x02032130(unaff_r5,unaff_r6,1,0);
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x8c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar4 + 0x1c) == 0x12) goto LAB_02c6ed80;
    if (*(int *)((int)param_1 + 0x8c) == 0) {
      unaff_lr = (undefined *)0x2c6ed74;
      unaff_r4 = param_1;
      unaff_r5 = 0.0;
      register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
      goto SUB_014388e4;
    }
    if (*(int *)(*(int *)((int)param_1 + 0x8c) + 0x1c) == 0x21) goto LAB_02c6ed80;
    iVar4 = *(int *)((int)param_1 + 0x94);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar4,0,0);
  }
  FUN_02c6f968(param_1,*(undefined4 *)((int)param_1 + 0x8c));
  FUN_02c6ffa4(param_1,0);
  FUN_02c70134(param_1,0);
  if (*(int *)((int)param_1 + 0x90) == 0) {
    unaff_lr = (undefined *)0x2c6ee20;
    unaff_r4 = param_1;
    unaff_r5 = 0.0;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
    goto SUB_014388e4;
  }
  fVar3 = *(float *)(*(int *)((int)param_1 + 0x90) + 0xc);
  fVar1 = fVar3;
  if ((uint)fVar3 < 7) {
    fVar1 = *(float *)(&UNK_02c6ee3c + (int)fVar3 * 4);
    switch(fVar3) {
    case 0.0:
      fVar1 = (float)FUN_02c702b0(param_1,*(undefined4 *)((int)param_1 + 0x8c));
      break;
    case 1.4013e-45:
      fVar1 = (float)FUN_02c709a0(param_1,*(undefined4 *)((int)param_1 + 0x8c),
                                  *(undefined4 *)((int)param_1 + 0x90));
      break;
    case 2.8026e-45:
      fVar1 = (float)FUN_02c7046c(param_1,*(undefined4 *)((int)param_1 + 0x8c),
                                  *(undefined4 *)((int)param_1 + 0x90));
      break;
    case 4.2039e-45:
      fVar1 = (float)FUN_02c7106c(param_1,*(undefined4 *)((int)param_1 + 0x8c));
      if (0 < (int)*(float *)((int)param_1 + 0x74)) {
        bVar13 = fVar1 == 5.60519e-45;
        if (bVar13) {
          fVar1 = *(float *)((int)param_1 + 0x78);
        }
        if (bVar13 && *(float *)((int)param_1 + 0x74) == fVar1) {
          if (*(int *)(**(int **)(&UNK_02c6eec4 + _UNK_02c6efec) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(&UNK_02c6eee0 + _UNK_02c6eff0));
          unaff_r6 = FUN_02c6b6f0(param_1);
          if (iVar4 == 0) {
            unaff_lr = &UNK_02c6ef00;
            unaff_r5 = 0.0;
            unaff_r4 = param_1;
            register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
SUB_014388e4:
            *(undefined **)((int)register0x00000054 + -4) = unaff_lr;
            *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x14) = 0x14b0524;
            *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r11;
            *(undefined4 *)((int)register0x00000054 + -0x1c) = 0x14b052c;
            *(int *)((int)register0x00000054 + -0x20) = unaff_r6;
            *(float *)((int)register0x00000054 + -0x24) = unaff_r5;
            pfVar7 = (float *)((int)register0x00000054 + -0x28);
            *pfVar7 = unaff_r4;
            iVar4 = _UNK_014b0564 + 0x14b054c;
            iVar8 = _UNK_014b0568 + 0x14b0550;
            uVar5 = func_0x014654bc();
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r11;
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            *pfVar7 = *pfVar7;
            func_0x0142c478(uVar5,iVar4,iVar8);
            fVar1 = (float)func_0x0149d458();
            func_0x0147f99c();
            if (*(int *)((int)register0x00000054 + -0xc) != 0) {
              uVar5 = func_0x0149158c((undefined1 *)((int)register0x00000054 + -0x10));
              func_0x01482ce4((int)fVar1 + 0xc,uVar5);
            }
            return fVar1;
          }
          fVar1 = (float)FUN_02baeb18(iVar4,unaff_r6,0);
          if (fVar1 == 0.0) {
            if (*(int *)(**(int **)(&UNK_02c6ef24 + _UNK_02c6eff4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(&UNK_02c6ef40 + _UNK_02c6eff8));
            if (iVar4 == 0) {
              unaff_lr = &UNK_02c6ef54;
              unaff_r5 = 0.0;
              unaff_r4 = param_1;
              register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
              goto SUB_014388e4;
            }
            fVar1 = (float)func_0x029ca78c(iVar4,0);
            if (2 < (int)fVar1) {
              fVar1 = (float)FUN_02c7152c(param_1);
            }
          }
        }
      }
      break;
    case 8.40779e-45:
      fVar1 = (float)FUN_02c70864(param_1,*(undefined4 *)((int)param_1 + 0x8c),
                                  *(undefined4 *)((int)param_1 + 0x90));
    }
  }
  return fVar1;
}

