
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c834ac(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  int iStack_90;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pcVar11 = (char *)(_UNK_01c84048 + 0x1c834cc);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c8404c + 0x1c834e0));
    func_0x01438628(*(undefined4 *)(_UNK_01c84050 + 0x1c834ec));
    func_0x01438628(*(undefined4 *)(_UNK_01c84054 + 0x1c834f8));
    func_0x01438628(*(undefined4 *)(_UNK_01c84058 + 0x1c83504));
    func_0x01438628(*(undefined4 *)(_UNK_01c8405c + 0x1c83510));
    func_0x01438628(*(undefined4 *)(_UNK_01c84060 + 0x1c8351c));
    func_0x01438628(*(undefined4 *)(_UNK_01c84064 + 0x1c83528));
    func_0x01438628(*(undefined4 *)(_UNK_01c84068 + 0x1c83534));
    func_0x01438628(*(undefined4 *)(_UNK_01c8406c + 0x1c83540));
    func_0x01438628(*(undefined4 *)(_UNK_01c84070 + 0x1c8354c));
    func_0x01438628(*(undefined4 *)(_UNK_01c84074 + 0x1c83558));
    func_0x01438628(*(undefined4 *)(_UNK_01c84078 + 0x1c83564));
    func_0x01438628(*(undefined4 *)(_UNK_01c8407c + 0x1c83570));
    func_0x01438628(*(undefined4 *)(_UNK_01c84080 + 0x1c8357c));
    func_0x01438628(*(undefined4 *)(_UNK_01c84084 + 0x1c83588));
    func_0x01438628(*(undefined4 *)(_UNK_01c84088 + 0x1c83594));
    func_0x01438628(*(undefined4 *)(_UNK_01c8408c + 0x1c835a0));
    func_0x01438628(*(undefined4 *)(_UNK_01c84090 + 0x1c835ac));
    func_0x01438628(*(undefined4 *)(_UNK_01c84094 + 0x1c835b8));
    func_0x01438628(*(undefined4 *)(_UNK_01c84098 + 0x1c835c4));
    func_0x01438628(*(undefined4 *)(_UNK_01c8409c + 0x1c835d0));
    func_0x01438628(*(undefined4 *)(_UNK_01c840a0 + 0x1c835dc));
    func_0x01438628(*(undefined4 *)(_UNK_01c840a4 + 0x1c835e8));
    func_0x01438628(*(undefined4 *)(_UNK_01c840a8 + 0x1c835f4));
    func_0x01438628(*(undefined4 *)(_UNK_01c840ac + 0x1c83600));
    func_0x01438628(*(undefined4 *)(_UNK_01c840b0 + 0x1c8360c));
    func_0x01438628(*(undefined4 *)(_UNK_01c840b4 + 0x1c83618));
    func_0x01438628(*(undefined4 *)(_UNK_01c840b8 + 0x1c83624));
    func_0x01438628(*(undefined4 *)(_UNK_01c840bc + 0x1c83630));
    func_0x01438628(*(undefined4 *)(_UNK_01c840c0 + 0x1c8363c));
    func_0x01438628(*(undefined4 *)(_UNK_01c840c4 + 0x1c83648));
    func_0x01438628(*(undefined4 *)(_UNK_01c840c8 + 0x1c83654));
    func_0x01438628(*(undefined4 *)(_UNK_01c840cc + 0x1c83660));
    func_0x01438628(*(undefined4 *)(_UNK_01c840d0 + 0x1c8366c));
    func_0x01438628(*(undefined4 *)(_UNK_01c840d4 + 0x1c83678));
    func_0x01438628(*(undefined4 *)(_UNK_01c840d8 + 0x1c83684));
    func_0x01438628(*(undefined4 *)(_UNK_01c840dc + 0x1c83690));
    *pcVar11 = '\x01';
  }
  uStack_44 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = (ulonglong)uStack_44 << 0x20;
  uStack_30 = CONCAT44(uStack_3c,uStack_40);
  iVar2 = func_0x02953fd4(0xad2c,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01c840e0 + 0x1c83714));
    func_0x01c88060(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar2 + 8) = param_1;
    func_0x014385cc((int *)(iVar2 + 8),param_1);
    if ((0 < param_5) && (*(int *)(param_1 + 0x44) != 0)) {
      if (*(int *)(**(int **)(_UNK_01c840e4 + 0x1c83764) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01c840e8 + 0x1c83780));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x20);
      uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01c840ec + 0x1c837a0));
      func_0x03a062d0(uVar4,iVar2,**(undefined4 **)(_UNK_01c840f0 + 0x1c837c0),0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x024f0618(iVar3,uVar4,**(undefined4 **)(_UNK_01c840f4 + 0x1c837e4));
      if (iVar3 != 0) {
        puVar15 = *(undefined4 **)(_UNK_01c840f8 + 0x1c83804);
        iVar5 = func_0x014388d4(*puVar15);
        puVar16 = *(undefined4 **)(_UNK_01c840fc + 0x1c83818);
        func_0x024f0510(iVar5,*puVar16);
        piVar6 = (int *)(iVar2 + 0xc);
        *piVar6 = iVar5;
        func_0x014385cc(piVar6,iVar5);
        iStack_90 = func_0x014388d4(*puVar15);
        func_0x024f0510(iStack_90,*puVar16);
        if (param_6 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(int *)(param_6 + 0x2c) % 4;
        if (uVar7 < 4) {
          iVar3 = iVar3 + uVar7 * 8;
          *piVar6 = *(int *)(iVar3 + 0xc);
          func_0x014385cc();
          iStack_90 = *(int *)(iVar3 + 0x10);
        }
        iVar3 = 0;
        uVar7 = 0;
        iVar5 = 0;
        bVar1 = true;
        do {
          if (*(int *)(**(int **)(_UNK_01c84100 + 0x1c838b8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01c84104 + 0x1c838d4));
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar19 = func_0x03611848(*(undefined4 *)(iVar8 + 0x24),
                                   **(undefined4 **)(_UNK_01c84108 + 0x1c838f4));
          iVar8 = (int)((ulonglong)uVar19 >> 0x20);
          iVar17 = (int)uVar19;
          if (bVar1) {
            if (iVar2 == 0) {
              func_0x014388e4();
              iVar8 = extraout_r1;
            }
            if ((*piVar6 == 0) || (*(int *)(*piVar6 + 0xc) < 1)) goto LAB_01c839fc;
            if (*(int *)(**(int **)(_UNK_01c8410c + 0x1c83940) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01c84110 + 0x1c8395c));
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar12 = *(int *)(iVar8 + 0x24);
            iVar8 = *(int *)(iVar2 + 0x10);
            if (iVar8 == 0) {
              iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01c84114 + 0x1c83990));
              func_0x03a062d0(iVar8,iVar2,**(undefined4 **)(_UNK_01c84118 + 0x1c839ac),0);
              *(int *)(iVar2 + 0x10) = iVar8;
              func_0x014385cc((int *)(iVar2 + 0x10),iVar8);
            }
            if (iVar12 == 0) {
              func_0x014388e4();
            }
            iVar8 = func_0x024f0618(iVar12,iVar8,**(undefined4 **)(_UNK_01c8411c + 0x1c839e0));
            if (iVar8 != 0) {
              iVar17 = iVar8;
            }
            bVar1 = false;
          }
          else {
LAB_01c839fc:
            if (iVar2 == 0) {
              func_0x014388e4();
              iVar8 = extraout_r1_00;
            }
            iVar12 = *piVar6;
            if (iVar12 != 0) {
              iVar8 = iStack_90;
            }
            if (iVar12 != 0 && iVar8 != 0) {
              iVar8 = *(int *)(iVar12 + 0xc);
              if (0 < iVar8) {
                iVar8 = *(int *)(iStack_90 + 0xc);
              }
              if (0 < iVar8) {
                iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01c84120 + 0x1c83a48));
                func_0x01c8815c(iVar8,0);
                iVar12 = *piVar6;
                if (*(int *)(**(int **)(_UNK_01c84124 + 0x1c83a64) + 0x74) == 0) {
                  func_0x014387a4();
                }
                uVar4 = func_0x02dda680(iStack_90,0);
                if (iVar12 == 0) {
                  func_0x014388e4();
                }
                uVar4 = func_0x024f0530(iVar12,uVar4,**(undefined4 **)(_UNK_01c84128 + 0x1c83aa8));
                if (iVar8 == 0) {
                  func_0x014388e4();
                }
                iVar12 = *(int *)(**(int **)(_UNK_01c8412c + 0x1c83acc) + 0x74);
                *(undefined4 *)(iVar8 + 8) = uVar4;
                if (iVar12 == 0) {
                  func_0x014387a4();
                }
                iVar12 = func_0x014e9518(**(undefined4 **)(_UNK_01c84130 + 0x1c83aec));
                if (iVar12 == 0) {
                  func_0x014388e4();
                }
                iVar12 = *(int *)(iVar12 + 0x24);
                uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01c84134 + 0x1c83b0c));
                func_0x03a062d0(uVar4,iVar8,**(undefined4 **)(_UNK_01c84138 + 0x1c83b2c),0);
                if (iVar12 == 0) {
                  func_0x014388e4();
                }
                iVar8 = func_0x024f0618(iVar12,uVar4,**(undefined4 **)(_UNK_01c8413c + 0x1c83b50));
                if (iVar8 != 0) {
                  iVar17 = iVar8;
                }
              }
            }
          }
          if (iVar17 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar17 + 0x14);
          uVar4 = *(undefined4 *)(iVar17 + 0x18);
          if (*(int *)(**(int **)(_UNK_01c84140 + 0x1c83b7c) + 0x74) == 0) {
            func_0x014387a4();
          }
          uVar4 = func_0x02dda680(uVar4,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x024f0530(iVar8,uVar4,**(undefined4 **)(_UNK_01c84144 + 0x1c83bc0));
          if (0 < iVar8) {
            iVar12 = 1;
            do {
              iVar13 = *(int *)(iVar17 + 0xc);
              if (iVar13 == 0) {
                func_0x014388e4();
              }
              puVar15 = *(undefined4 **)(_UNK_01c84148 + 0x1c83c00);
              uVar4 = func_0x024f0530(iVar13,0,*puVar15);
              iVar13 = *(int *)(iVar17 + 0xc);
              if (iVar13 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x024f0530(iVar13,1,*puVar15);
              iVar13 = func_0x024f14b8(uVar4,uVar9,0);
              iVar14 = *(int *)(iVar17 + 0x10);
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              uVar4 = func_0x024f0530(iVar14,0,*puVar15);
              iVar14 = *(int *)(iVar17 + 0x10);
              if (iVar14 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x024f0530(iVar14,1,*puVar15);
              iVar14 = func_0x024f14b8(uVar4,uVar9,0);
              uVar4 = 1000;
              uVar10 = iVar14 * 1000;
              bVar18 = CARRY4(uVar7,uVar10);
              uVar7 = uVar7 + uVar10;
              iVar5 = iVar5 + ((int)uVar10 >> 0x1f) + (uint)bVar18;
              if (param_6 == 0) {
                func_0x014388e4();
                uVar4 = extraout_r1_01;
              }
              iVar14 = *(int *)(param_6 + 0x14);
              if (iVar14 == 0) {
                func_0x014388e4();
                uVar4 = extraout_r1_02;
              }
              iVar3 = iVar13 + iVar3;
              func_0x03b74530(iVar14,uVar4,uVar7 + param_3,
                              iVar5 + param_4 + (uint)CARRY4(uVar7,param_3),iVar3,
                              **(undefined4 **)(_UNK_01c8414c + 0x1c83cec));
            } while ((iVar3 < param_5) && (bVar18 = iVar12 < iVar8, iVar12 = iVar12 + 1, bVar18));
          }
        } while (iVar3 < param_5);
        if (param_6 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(param_6 + 0x10) == '\0') {
          iVar2 = *(int *)(param_6 + 0x14);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x024f1b00(iVar2,**(undefined4 **)(_UNK_01c84150 + 0x1c83d70));
          if (0 < iVar2) {
            piVar6 = *(int **)(_UNK_01c84154 + 0x1c83d8c);
            uVar4 = *(undefined4 *)(param_6 + 0x14);
            iVar2 = *piVar6;
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x014387a4();
              iVar2 = *piVar6;
            }
            iVar3 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x10);
            if (iVar3 == 0) {
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x014387a4();
                iVar2 = *piVar6;
              }
              uVar9 = **(undefined4 **)(iVar2 + 0x5c);
              iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01c84158 + 0x1c83dd8));
              func_0x024f1b10(iVar3,uVar9,**(undefined4 **)(_UNK_01c8415c + 0x1c83df8),0);
              piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x10);
              *piVar6 = iVar3;
              func_0x014385cc(piVar6,iVar3);
            }
            uVar4 = func_0x036178c0(uVar4,iVar3,**(undefined4 **)(_UNK_01c84160 + 0x1c83e24));
            iVar2 = func_0x036262b0(uVar4,**(undefined4 **)(_UNK_01c84164 + 0x1c83e38));
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar4 = *(undefined4 *)(iVar2 + 0xc);
            iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01c84168 + 0x1c83e58));
            func_0x024f0d78(iVar3,uVar4,**(undefined4 **)(_UNK_01c8416c + 0x1c83e74));
            func_0x024f1b20(&uStack_68,iVar2,**(undefined4 **)(_UNK_01c84170 + 0x1c83e90));
            uStack_48 = uStack_68;
            uStack_44 = uStack_64;
            uStack_40 = uStack_60;
            uStack_3c = uStack_5c;
            uStack_38 = uStack_58;
            uStack_30 = uStack_50;
            piVar6 = *(int **)(_UNK_01c84174 + 0x1c83eb8);
            while (iVar2 = func_0x0150eedc(&uStack_48,**(undefined4 **)(_UNK_01c84184 + 0x1c83ec0)),
                  iVar2 != 0) {
              uVar4 = (undefined4)uStack_30;
              uStack_64 = uStack_38._4_4_;
              uStack_68 = (undefined4)uStack_38;
              uVar9 = func_0x014387ac(**(undefined4 **)(_UNK_01c84178 + 0x1c83ee4),&uStack_68);
              uStack_6c = uVar4;
              uVar4 = func_0x014387ac(**(undefined4 **)(_UNK_01c8417c + 0x1c83f04),&uStack_6c);
              uVar4 = func_0x014e95b8(**(undefined4 **)(_UNK_01c84180 + 0x1c83f20),uVar9,uVar4,0);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar3 + 8);
              uVar7 = *(uint *)(iVar3 + 0xc);
              iVar2 = *piVar6;
              *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              if (uVar7 < *(uint *)(iVar5 + 0xc)) {
                *(uint *)(iVar3 + 0xc) = uVar7 + 1;
                puVar15 = (undefined4 *)(iVar5 + uVar7 * 4 + 0x10);
                *puVar15 = uVar4;
                func_0x014385cc(puVar15,uVar4);
              }
              else {
                func_0x0152874c(iVar3,uVar4,
                                *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
              }
            }
            func_0x024f1b30(&uStack_48,**(undefined4 **)(_UNK_01c84188 + 0x1c83fb0));
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0xad2c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028ba7b4(iVar2,param_1,param_3,param_4,param_5,param_6,0);
  }
  return;
}

