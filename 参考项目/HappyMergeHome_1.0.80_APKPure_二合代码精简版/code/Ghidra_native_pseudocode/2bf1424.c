
/* WARNING: Removing unreachable block (ram,0x02c01e10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c01424(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_02c02030 + 0x2c01448);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c02034 + 0x2c0145c));
    func_0x01438628(*(undefined4 *)(_UNK_02c02038 + 0x2c01468));
    func_0x01438628(*(undefined4 *)(_UNK_02c0203c + 0x2c01474));
    func_0x01438628(*(undefined4 *)(_UNK_02c02040 + 0x2c01480));
    func_0x01438628(*(undefined4 *)(_UNK_02c02044 + 0x2c0148c));
    func_0x01438628(*(undefined4 *)(_UNK_02c02048 + 0x2c01498));
    func_0x01438628(*(undefined4 *)(_UNK_02c0204c + 0x2c014a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c02050 + 0x2c014b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c02054 + 0x2c014bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c02058 + 0x2c014c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0205c + 0x2c014d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c02060 + 0x2c014e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c02064 + 0x2c014ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c02068 + 0x2c014f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0206c + 0x2c01504));
    func_0x01438628(*(undefined4 *)(_UNK_02c02070 + 0x2c01510));
    func_0x01438628(*(undefined4 *)(_UNK_02c02074 + 0x2c0151c));
    func_0x01438628(*(undefined4 *)(_UNK_02c02078 + 0x2c01528));
    func_0x01438628(*(undefined4 *)(_UNK_02c0207c + 0x2c01534));
    *pcVar7 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_3c = 0;
  iStack_40 = 0;
  uStack_50 = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
  iVar1 = func_0x02953fd4(0xfb2,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c02080 + 0x2c015bc));
    func_0x02c3f998(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar1 + 8) = param_4;
    if (0 < param_4) {
      iVar10 = 0;
LAB_02c015f4:
      iVar8 = *(int *)(param_1 + 0xd0);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x04722c90(iVar8,iVar10,**(undefined4 **)(_UNK_02c02084 + 0x2c01618));
      if (iVar8 != 0) {
        iVar8 = *(int *)(param_1 + 0xd0);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = func_0x0472298c(iVar8,iVar10,**(undefined4 **)(_UNK_02c02088 + 0x2c0164c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar1 + 0xc);
        if (iVar9 == 0) {
          iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_02c0208c + 0x2c01680));
          func_0x03a062d0(iVar9,iVar1,**(undefined4 **)(_UNK_02c02090 + 0x2c0169c),0);
          *(int *)(iVar1 + 0xc) = iVar9;
          func_0x014385cc((int *)(iVar1 + 0xc),iVar9);
        }
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = func_0x024f0618(iVar8,iVar9,**(undefined4 **)(_UNK_02c02094 + 0x2c016d0));
        if ((iVar8 != 0) && (iVar9 = func_0x02c02108(param_1,iVar8), iVar9 != 0)) {
          iVar5 = *(int *)(param_1 + 0xd8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar5 + 0xc);
          *(undefined4 *)(iVar5 + 0xc) = 0;
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          if (0 < iVar4) {
            func_0x01523bec(*(undefined4 *)(iVar5 + 8),0,iVar4,0);
          }
          iVar5 = *(int *)(param_1 + 0xd8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar5 + 8);
          uVar6 = *(uint *)(iVar5 + 0xc);
          piVar3 = *(int **)(_UNK_02c02098 + 0x2c01774);
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          iVar11 = *piVar3;
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (uVar6 < *(uint *)(iVar4 + 0xc)) {
            *(uint *)(iVar5 + 0xc) = uVar6 + 1;
            piVar3 = (int *)(iVar4 + uVar6 * 4 + 0x10);
            *piVar3 = iVar8;
            func_0x014385cc(piVar3,iVar8);
          }
          else {
            func_0x0152874c(iVar5,iVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
          func_0x0152da0c(&uStack_60,iVar9,**(undefined4 **)(_UNK_02c0209c + 0x2c017d8));
          uStack_38 = uStack_60;
          uStack_34 = uStack_5c;
          uStack_30 = uStack_58;
          iStack_2c = iStack_54;
LAB_02c017ec:
          do {
            iVar5 = func_0x04878f14(&uStack_38,**(undefined4 **)(_UNK_02c020a0 + 0x2c017f8));
            iVar9 = iStack_2c;
            if (iVar5 == 0) goto LAB_02c018d8;
            if (iStack_2c != iVar8) {
              if (iVar10 == 0) {
                if (iStack_2c == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar9 + 0x14) == 0) goto LAB_02c017ec;
              }
              iVar5 = *(int *)(param_1 + 0xd8);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar11 = *(int *)(iVar5 + 8);
              uVar6 = *(uint *)(iVar5 + 0xc);
              piVar3 = *(int **)(_UNK_02c020a4 + 0x2c01868);
              *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
              iVar4 = *piVar3;
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              if (uVar6 < *(uint *)(iVar11 + 0xc)) {
                *(uint *)(iVar5 + 0xc) = uVar6 + 1;
                piVar3 = (int *)(iVar11 + uVar6 * 4 + 0x10);
                *piVar3 = iVar9;
                func_0x014385cc(piVar3,iVar9);
              }
              else {
                func_0x0152874c(iVar5,iVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
              }
              iVar9 = *(int *)(param_1 + 0xd8);
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              if (1 < *(int *)(iVar9 + 0xc)) goto LAB_02c01f38;
            }
          } while( true );
        }
      }
      goto LAB_02c018ec;
    }
LAB_02c01950:
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar10 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar10) {
      func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar10,0);
    }
    if (*(int *)(**(int **)(_UNK_02c020b4 + 0x2c019a0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c020b8 + 0x2c019bc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02baf084(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_02c020bc + 0x2c019f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_02c020c0 + 0x2c01a0c));
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar10 = func_0x02d10694(iVar10,0,0);
    iVar8 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0xd0);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x04722c90(iVar9,iVar8,**(undefined4 **)(_UNK_02c020c4 + 0x2c01a5c));
      if (iVar9 != 0) {
        iVar9 = *(int *)(param_1 + 0xd0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar9 = func_0x0472298c(iVar9,iVar8,**(undefined4 **)(_UNK_02c020c8 + 0x2c01a90));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x0152da0c(&uStack_60,iVar9,**(undefined4 **)(_UNK_02c020cc + 0x2c01abc));
        uStack_38 = uStack_60;
        uStack_34 = uStack_5c;
        uStack_30 = uStack_58;
        iStack_2c = iStack_54;
LAB_02c01ad0:
        iVar5 = func_0x04878f14(&uStack_38,**(undefined4 **)(_UNK_02c020f4 + 0x2c01adc));
        iVar9 = iStack_2c;
        if (iVar5 != 0) {
          if (param_2 != 0) goto code_r0x02c01afc;
          goto LAB_02c01bec;
        }
        func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02c020f8 + 0x2c01e68));
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 3);
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) < 2) {
      iVar1 = *(int *)(param_1 + 0xd8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar10 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar10) {
        func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar10,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xfb2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02897a58(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
LAB_02c018d8:
  func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02c020b0 + 0x2c018e4));
LAB_02c018ec:
  iVar10 = iVar10 + 1;
  if (iVar10 == 3) goto LAB_02c01950;
  goto LAB_02c015f4;
code_r0x02c01afc:
  if (iStack_2c == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x02c3f4b4(iVar9,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x046c3f38(iVar1,uVar2,&iStack_3c,**(undefined4 **)(_UNK_02c020d4 + 0x2c01b34));
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x02c3f4b4(iVar9,0);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  func_0x046c3f38(iVar10,uVar2,&iStack_40,**(undefined4 **)(_UNK_02c020d8 + 0x2c01b7c));
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x02c3f4b4(iVar9,0);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x046c26fc(iVar10,uVar2,**(undefined4 **)(_UNK_02c020dc + 0x2c01bc4));
  if ((iVar5 == 0) || (1 < iStack_3c - iStack_40)) {
LAB_02c01bec:
    iVar5 = func_0x02c02108(param_1,iVar9);
    if (iVar5 != 0) {
      iVar4 = *(int *)(param_1 + 0xd8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar11 = *(int *)(iVar4 + 0xc);
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      if (0 < iVar11) {
        func_0x01523bec(*(undefined4 *)(iVar4 + 8),0,iVar11,0);
      }
      iVar4 = *(int *)(param_1 + 0xd8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar11 = *(int *)(iVar4 + 8);
      uVar6 = *(uint *)(iVar4 + 0xc);
      piVar3 = *(int **)(_UNK_02c020e0 + 0x2c01c7c);
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      iVar12 = *piVar3;
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      if (uVar6 < *(uint *)(iVar11 + 0xc)) {
        *(uint *)(iVar4 + 0xc) = uVar6 + 1;
        piVar3 = (int *)(iVar11 + uVar6 * 4 + 0x10);
        *piVar3 = iVar9;
        func_0x014385cc(piVar3,iVar9);
      }
      else {
        func_0x0152874c(iVar4,iVar9,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                       );
      }
      func_0x0152da0c(&uStack_60,iVar5,**(undefined4 **)(_UNK_02c020e4 + 0x2c01cd4));
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      uStack_48 = uStack_58;
      iStack_44 = iStack_54;
LAB_02c01cf0:
      do {
        do {
          iVar4 = func_0x04878f14(&uStack_50,**(undefined4 **)(_UNK_02c020e8 + 0x2c01cfc));
          iVar5 = iStack_44;
          if (iVar4 == 0) {
            iVar9 = 0xf;
            goto LAB_02c01df4;
          }
        } while (iVar9 == iStack_44);
        if (iVar8 == 0) {
          if (iStack_44 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0x14) == 0) goto LAB_02c01cf0;
        }
        iVar4 = *(int *)(param_1 + 0xd8);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar11 = *(int *)(iVar4 + 8);
        uVar6 = *(uint *)(iVar4 + 0xc);
        piVar3 = *(int **)(_UNK_02c020ec + 0x2c01d70);
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
        iVar12 = *piVar3;
        if (iVar11 == 0) {
          func_0x014388e4();
        }
        if (uVar6 < *(uint *)(iVar11 + 0xc)) {
          *(uint *)(iVar4 + 0xc) = uVar6 + 1;
          piVar3 = (int *)(iVar11 + uVar6 * 4 + 0x10);
          *piVar3 = iVar5;
          func_0x014385cc(piVar3,iVar5);
        }
        else {
          func_0x0152874c(iVar4,iVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
        }
        if (param_3 == 0) goto LAB_02c01cf0;
        iVar5 = *(int *)(param_1 + 0xd8);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
      } while (*(int *)(iVar5 + 0xc) < 2);
      iVar9 = 0xb;
LAB_02c01df4:
      func_0x04878f10(&uStack_50,**(undefined4 **)(_UNK_02c020f0 + 0x2c01e00));
      if (iVar9 != 0xf && iVar9 != 0) {
LAB_02c01f38:
        func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02c020a8 + 0x2c01f44));
        return;
      }
    }
  }
  goto LAB_02c01ad0;
}

