/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.txt
 * Cpp2IL method: ActivationResult SpecialActivate(System.Int32 takeAmount, GameLogic.Player.IPlayer player, System.Int32 capacityConsumptionMultiplier, System.Boolean onFireActive, out System.Int32 spawned)
 * Ghidra function entry: 036db608
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Possible PIC construction at 0x036db97c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x036db980) */
/* WARNING: Removing unreachable block (ram,0x036db998) */
/* WARNING: Removing unreachable block (ram,0x036db9a0) */
/* WARNING: Removing unreachable block (ram,0x036db9b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_036db608(long param_1,uint param_2,uint *param_3,uint *param_4,ulong param_5,
                   uint *param_6,undefined8 param_7)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  undefined4 uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  uint uVar27;
  ulong uVar33;
  long lVar34;
  char *pcVar35;
  uint *puVar36;
  int iVar28;
  uint uVar29;
  uint *puVar37;
  uint *puVar38;
  long *plVar39;
  ulong uVar40;
  undefined8 uVar41;
  uint *extraout_x1;
  uint *puVar42;
  uint *puVar43;
  uint *puVar44;
  uint *puVar45;
  long lVar46;
  long *plVar47;
  long *plVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  int *piVar52;
  undefined8 uVar53;
  uint *puVar54;
  ulong uVar55;
  ulong uVar56;
  uint *puVar57;
  uint *unaff_x26;
  undefined *unaff_x27;
  uint *unaff_x28;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uStack_230;
  uint *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  uint *puStack_210;
  uint *puStack_208;
  uint *puStack_200;
  uint *puStack_1f8;
  uint *puStack_1f0;
  uint *puStack_1e8;
  uint *puStack_1e0;
  uint *puStack_1d8;
  uint *puStack_1d0;
  uint *puStack_1c8;
  uint *puStack_1c0;
  uint *puStack_1b8;
  uint *puStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  uint *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  char *pcStack_178;
  uint *puStack_170;
  undefined8 uStack_168;
  uint *puStack_160;
  undefined8 uStack_158;
  uint *puStack_148;
  uint *puStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  
  puVar57 = (uint *)(ulong)param_2;
  puVar54 = param_3;
  puVar44 = param_4;
  uVar40 = param_5;
  puVar43 = param_6;
  if ((bRam0000000005e2da32 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0170);
    func_0x0249f8e4(&DAT_059e2548);
    bRam0000000005e2da32 = 1;
  }
  *param_6 = 0;
  if (param_3 == (uint *)0x0) {
LAB_036dbb68:
    auVar58 = func_0x0249fb90();
    uVar51 = auVar58._8_8_;
    param_1 = auVar58._0_8_;
    param_3 = puVar54;
  }
  else {
    lVar46 = *(long *)param_3;
    uVar51 = (ulong)*(ushort *)(lVar46 + 0x12e);
    if (uVar51 != 0) {
      piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
      do {
        if (*(long *)(piVar52 + -2) == _DAT_059df8e8) {
          puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 5) * 0x10 + 0x138);
          goto LAB_036db6f0;
        }
        uVar51 = uVar51 - 1;
        piVar52 = piVar52 + 4;
      } while (uVar51 != 0);
    }
    puVar31 = (undefined8 *)func_0x024d927c(param_3,_DAT_059df8e8,5);
LAB_036db6f0:
    uVar32 = (*(code *)*puVar31)(param_3,puVar31[1]);
    uVar51 = func_0x036edd98(param_1,uVar32,0);
    if (((uVar51 & 1) == 0) && (uVar51 = func_0x036edf9c(param_1,uVar32,0), (uVar51 & 1) == 0)) {
      return (char *)0x0;
    }
    iVar28 = (int)param_4;
    uVar29 = iVar28 * param_2;
    unaff_x26 = (uint *)(ulong)uVar29;
    puVar44 = (uint *)0x0;
    puVar54 = unaff_x26;
    uVar51 = func_0x036ee328(param_1,param_3);
    if ((uVar51 & 1) == 0) {
      return (char *)0x0;
    }
    lVar46 = func_0x036d5e58(param_1);
    if (lVar46 == 0) goto LAB_036dbb68;
    if (0 < *(int *)(lVar46 + 0x50)) {
      lVar46 = func_0x036d5e58();
      if (lVar46 != 0) {
        if ((int)uVar29 < *(int *)(lVar46 + 0x50)) {
          *param_6 = param_2;
          lVar46 = func_0x036d5e58(param_1);
          if (lVar46 != 0) {
            *(uint *)(lVar46 + 0x50) = *(int *)(lVar46 + 0x50) - uVar29;
            return (char *)0x1;
          }
        }
        else {
          plVar47 = *(long **)(param_1 + 0x10);
          if (plVar47 != (long *)0x0) {
            puVar45 = (uint *)(**(code **)(*plVar47 + 0x1c8))
                                        (plVar47,uVar32,*(undefined8 *)(*plVar47 + 0x1d0));
            puVar54 = (uint *)0x0;
            uVar51 = func_0x036edd98(param_1,uVar32);
            if (((uVar51 & 1) == 0) || (iVar28 = func_0x036fa7dc(param_1,0), 0 < iVar28)) {
LAB_036dbaac:
              puVar54 = (uint *)0x0;
              uVar51 = func_0x036edf9c(param_1,uVar32);
              if ((uVar51 & 1) == 0) {
                return (char *)0x1;
              }
              lVar46 = func_0x036d5e58(param_1);
              if (((lVar46 != 0) && (*(long *)(lVar46 + 0xa8) != 0)) &&
                 (plVar47 = *(long **)(*(long *)(lVar46 + 0xa8) + 0x10), plVar47 != (long *)0x0)) {
                lVar46 = *plVar47;
                uVar40 = (ulong)*(ushort *)(lVar46 + 0x12e);
                if (uVar40 != 0) {
                  piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar52 + -2) == _DAT_059e0170) {
                      puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 1) * 0x10 + 0x138);
                      goto LAB_036dbb34;
                    }
                    uVar40 = uVar40 - 1;
                    piVar52 = piVar52 + 4;
                  } while (uVar40 != 0);
                }
                puVar31 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059e0170,1);
LAB_036dbb34:
                uVar40 = (*(code *)*puVar31)(plVar47,puVar31[1]);
                if ((uVar40 & 1) != 0) {
                  return (char *)0x1;
                }
                return (char *)0x2;
              }
            }
            else if (puVar45 != (uint *)0x0) {
              lVar46 = *(long *)puVar45;
              uVar51 = (ulong)*(ushort *)(lVar46 + 0x12e);
              if (uVar51 != 0) {
                piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar52 + -2) == _DAT_059dfbc0) {
                    puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 3) * 0x10 + 0x138);
                    goto LAB_036db9cc;
                  }
                  uVar51 = uVar51 - 1;
                  piVar52 = piVar52 + 4;
                } while (uVar51 != 0);
              }
              puVar54 = (uint *)0x3;
              puVar31 = (undefined8 *)func_0x024d927c(puVar45);
LAB_036db9cc:
              plVar47 = (long *)(*(code *)*puVar31)(puVar45,puVar31[1]);
              if (plVar47 != (long *)0x0) {
                lVar46 = *plVar47;
                uVar51 = (ulong)*(ushort *)(lVar46 + 0x12e);
                if (uVar51 != 0) {
                  piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar52 + -2) == _DAT_059deb70) {
                      puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 0xe) * 0x10 + 0x138);
                      goto LAB_036dba38;
                    }
                    uVar51 = uVar51 - 1;
                    piVar52 = piVar52 + 4;
                  } while (uVar51 != 0);
                }
                puVar31 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059deb70,0xe);
LAB_036dba38:
                uVar51 = (*(code *)*puVar31)(plVar47,puVar31[1]);
                if ((uVar51 & 1) == 0) goto LAB_036dbaac;
                puVar42 = (uint *)func_0x022bffa8(3,_DAT_059dfbc0);
                puVar54 = puVar45;
                if ((puVar42 != (uint *)0x0) &&
                   (puVar45 = (uint *)func_0x022bffa8(2,_DAT_059deb70), puVar54 = puVar42,
                   puVar45 != (uint *)0x0)) {
                  uVar30 = func_0x022bffa8(0,_DAT_059deb60);
                  lVar46 = func_0x036d5ec8(param_1);
                  puVar54 = puVar45;
                  if (lVar46 != 0) {
                    uVar40 = func_0x0375380c(lVar46,uVar30,0);
                    if ((uVar40 & 1) == 0) {
                      return (char *)0x2;
                    }
                    return (char *)0x1;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_036dbb68;
    }
    puVar54 = (uint *)0x0;
    uVar51 = func_0x036edd98(param_1,uVar32);
    if ((uVar51 & 1) == 0) {
      puVar54 = (uint *)0x0;
      uVar51 = func_0x036edf9c(param_1,uVar32);
      if ((uVar51 & 1) == 0) {
        return (char *)0x1;
      }
      lVar46 = func_0x036d5e58(param_1);
      if (((lVar46 == 0) || (*(long *)(lVar46 + 0xa8) == 0)) ||
         (plVar47 = *(long **)(*(long *)(lVar46 + 0xa8) + 0x10), plVar47 == (long *)0x0))
      goto LAB_036dbb68;
      lVar46 = *plVar47;
      uVar51 = (ulong)*(ushort *)(lVar46 + 0x12e);
      if (uVar51 != 0) {
        piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
        do {
          if (*(long *)(piVar52 + -2) == _DAT_059e0170) {
            puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 5) * 0x10 + 0x138);
            goto LAB_036db928;
          }
          uVar51 = uVar51 - 1;
          piVar52 = piVar52 + 4;
        } while (uVar51 != 0);
      }
      puVar31 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059e0170,5);
LAB_036db928:
      iVar26 = (*(code *)*puVar31)(plVar47,puVar31[1]);
      if (iVar28 < iVar26) {
        uVar29 = *param_6;
        do {
          iVar26 = iVar26 - iVar28;
          uVar29 = uVar29 + 1;
        } while (iVar28 < iVar26);
        *param_6 = uVar29;
      }
    }
    else {
      lVar46 = func_0x036d5e58(param_1);
      if ((lVar46 == 0) || (*(long *)(lVar46 + 0x28) == 0)) goto LAB_036dbb68;
      for (uVar29 = *(uint *)(*(long *)(lVar46 + 0x28) + 0x10); puVar57 = (uint *)(ulong)uVar29,
          iVar28 < (int)uVar29; uVar29 = uVar29 - iVar28) {
        lVar46 = func_0x036d5e58(param_1);
        if ((lVar46 == 0) || (*(long *)(lVar46 + 0x28) == 0)) goto LAB_036dbb68;
        puVar54 = (uint *)0x0;
        func_0x03700cf4(*(long *)(lVar46 + 0x28),(ulong)param_4 & 0xffffffff);
        *param_6 = *param_6 + 1;
      }
    }
    func_0x036d5e58(param_1);
    uVar51 = (ulong)((uint)param_5 & 1);
  }
  puVar54 = param_3;
  if ((bRam0000000005e2da38 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_059e0170);
    bRam0000000005e2da38 = 1;
  }
  lVar46 = func_0x036d5e58(param_1);
  if (lVar46 != 0) {
    if (*(int *)(lVar46 + 0x50) < 1) {
      if (param_3 != (uint *)0x0) {
        lVar46 = *(long *)param_3;
        uVar55 = (ulong)*(ushort *)(lVar46 + 0x12e);
        if (uVar55 != 0) {
          piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
          do {
            if (*(long *)(piVar52 + -2) == _DAT_059df8e8) {
              puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 5) * 0x10 + 0x138);
              goto LAB_036dbc70;
            }
            uVar55 = uVar55 - 1;
            piVar52 = piVar52 + 4;
          } while (uVar55 != 0);
        }
        puVar31 = (undefined8 *)func_0x024d927c(param_3,_DAT_059df8e8,5);
LAB_036dbc70:
        uVar32 = (*(code *)*puVar31)(param_3,puVar31[1]);
        puVar54 = (uint *)0x0;
        uVar56 = func_0x036edd98(param_1,uVar32);
        lVar46 = *(long *)param_3;
        uVar1 = *(ushort *)(lVar46 + 0x12e);
        uVar55 = (ulong)uVar1;
        if ((uVar56 & 1) == 0) {
          if (uVar1 != 0) {
            piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
            do {
              if (*(long *)(piVar52 + -2) == _DAT_059df8e8) {
                puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 5) * 0x10 + 0x138);
                goto LAB_036dbda0;
              }
              uVar55 = uVar55 - 1;
              piVar52 = piVar52 + 4;
            } while (uVar55 != 0);
          }
          puVar31 = (undefined8 *)func_0x024d927c(param_3,_DAT_059df8e8,5);
LAB_036dbda0:
          uVar32 = (*(code *)*puVar31)(param_3,puVar31[1]);
          puVar54 = (uint *)0x0;
          uVar51 = func_0x036edf9c(param_1,uVar32);
          if ((uVar51 & 1) == 0) {
            uVar29 = 0;
            goto LAB_036dbc00;
          }
          lVar46 = func_0x036d5e58(param_1);
          if (((lVar46 != 0) && (*(long *)(lVar46 + 0xa8) != 0)) &&
             (plVar47 = *(long **)(*(long *)(lVar46 + 0xa8) + 0x10), plVar47 != (long *)0x0)) {
            lVar46 = *plVar47;
            uVar40 = (ulong)*(ushort *)(lVar46 + 0x12e);
            if (uVar40 != 0) {
              piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
              do {
                if (*(long *)(piVar52 + -2) == _DAT_059e0170) {
                  iVar28 = *piVar52 + 6;
                  goto LAB_036dbfbc;
                }
                uVar40 = uVar40 - 1;
                piVar52 = piVar52 + 4;
              } while (uVar40 != 0);
            }
            uVar32 = 6;
            lVar46 = _DAT_059e0170;
            goto LAB_036dbfac;
          }
        }
        else {
          if (uVar1 != 0) {
            piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
            do {
              if (*(long *)(piVar52 + -2) == _DAT_059df8e8) {
                puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 5) * 0x10 + 0x138);
                goto LAB_036dbd14;
              }
              uVar55 = uVar55 - 1;
              piVar52 = piVar52 + 4;
            } while (uVar55 != 0);
          }
          puVar54 = (uint *)0x5;
          puVar31 = (undefined8 *)func_0x024d927c(param_3);
LAB_036dbd14:
          uVar32 = (*(code *)*puVar31)(param_3,puVar31[1]);
          plVar47 = *(long **)(param_1 + 0x10);
          if (plVar47 != (long *)0x0) {
            puVar54 = *(uint **)(*plVar47 + 0x1d0);
            plVar47 = (long *)(**(code **)(*plVar47 + 0x1c8))(plVar47,uVar32);
            if ((uVar51 & 1) == 0) {
LAB_036dbefc:
              if (plVar47 != (long *)0x0) {
                lVar46 = *plVar47;
                uVar51 = (ulong)*(ushort *)(lVar46 + 0x12e);
                if (uVar51 != 0) {
                  piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar52 + -2) == _DAT_059dfbc0) {
                      puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 3) * 0x10 + 0x138);
                      goto LAB_036dbf58;
                    }
                    uVar51 = uVar51 - 1;
                    piVar52 = piVar52 + 4;
                  } while (uVar51 != 0);
                }
                puVar54 = (uint *)0x3;
                puVar31 = (undefined8 *)func_0x024d927c(plVar47);
LAB_036dbf58:
                plVar47 = (long *)(*(code *)*puVar31)(plVar47,puVar31[1]);
                if (plVar47 != (long *)0x0) {
                  lVar46 = *plVar47;
                  uVar40 = (ulong)*(ushort *)(lVar46 + 0x12e);
                  if (uVar40 != 0) {
                    piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar52 + -2) == _DAT_059deb70) {
                        iVar28 = *piVar52 + 0x14;
LAB_036dbfbc:
                        puVar31 = (undefined8 *)(lVar46 + (long)iVar28 * 0x10 + 0x138);
                        goto LAB_036dbfc4;
                      }
                      uVar40 = uVar40 - 1;
                      piVar52 = piVar52 + 4;
                    } while (uVar40 != 0);
                  }
                  uVar32 = 0x14;
                  lVar46 = _DAT_059deb70;
LAB_036dbfac:
                  puVar31 = (undefined8 *)func_0x024d927c(plVar47,lVar46,uVar32);
LAB_036dbfc4:
                    /* WARNING: Could not recover jumptable at 0x036dbfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar35 = (char *)(*(code *)*puVar31)(plVar47,puVar31[1]);
                  return pcVar35;
                }
              }
            }
            else if (plVar47 != (long *)0x0) {
              lVar46 = *plVar47;
              uVar51 = (ulong)*(ushort *)(lVar46 + 0x12e);
              if (uVar51 != 0) {
                piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar52 + -2) == _DAT_059dfbc0) {
                    puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 0x19) * 0x10 + 0x138);
                    goto LAB_036dbe38;
                  }
                  uVar51 = uVar51 - 1;
                  piVar52 = piVar52 + 4;
                } while (uVar51 != 0);
              }
              puVar54 = (uint *)0x19;
              puVar31 = (undefined8 *)func_0x024d927c(plVar47);
LAB_036dbe38:
              plVar48 = (long *)(*(code *)*puVar31)(plVar47,puVar31[1]);
              if (plVar48 != (long *)0x0) {
                lVar46 = *plVar48;
                uVar51 = (ulong)*(ushort *)(lVar46 + 0x12e);
                if (uVar51 != 0) {
                  piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar52 + -2) == _DAT_059e0150) {
                      puVar31 = (undefined8 *)(lVar46 + (long)*piVar52 * 0x10 + 0x138);
                      goto LAB_036dbeac;
                    }
                    uVar51 = uVar51 - 1;
                    piVar52 = piVar52 + 4;
                  } while (uVar51 != 0);
                }
                puVar54 = (uint *)0x0;
                puVar31 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036dbeac:
                uVar51 = (*(code *)*puVar31)(plVar48,puVar31[1]);
                if ((uVar51 & 1) == 0) goto LAB_036dbefc;
                lVar46 = *plVar47;
                uVar51 = (ulong)*(ushort *)(lVar46 + 0x12e);
                if (uVar51 != 0) {
                  piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar52 + -2) == _DAT_059dfbc0) {
                      puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 0x19) * 0x10 + 0x138);
                      goto LAB_036dbff0;
                    }
                    uVar51 = uVar51 - 1;
                    piVar52 = piVar52 + 4;
                  } while (uVar51 != 0);
                }
                puVar54 = (uint *)0x19;
                puVar31 = (undefined8 *)func_0x024d927c(plVar47);
LAB_036dbff0:
                plVar47 = (long *)(*(code *)*puVar31)(plVar47,puVar31[1]);
                if (plVar47 != (long *)0x0) {
                  lVar46 = *plVar47;
                  uVar40 = (ulong)*(ushort *)(lVar46 + 0x12e);
                  if (uVar40 != 0) {
                    piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar52 + -2) == _DAT_059e0150) {
                        puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 4) * 0x10 + 0x138);
                        goto LAB_036dc054;
                      }
                      uVar40 = uVar40 - 1;
                      piVar52 = piVar52 + 4;
                    } while (uVar40 != 0);
                  }
                  puVar31 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059e0150,4);
LAB_036dc054:
                    /* WARNING: Could not recover jumptable at 0x036dc074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pcVar35 = (char *)(*(code *)*puVar31)(plVar47,param_1,param_3,puVar31[1]);
                  return pcVar35;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar46 = func_0x036d5e58(param_1);
      if (lVar46 != 0) {
        uVar29 = *(uint *)(lVar46 + 0x50);
LAB_036dbc00:
        return (char *)(ulong)uVar29;
      }
    }
  }
  auVar58 = func_0x0249fb90();
  plVar47 = auVar58._8_8_;
  lVar46 = auVar58._0_8_;
  uVar55 = uVar40 & 0xffffffff;
  uVar56 = (ulong)puVar44 & 0xffffffff;
  puVar45 = puVar44;
  uVar51 = uVar40;
  if ((bRam0000000005e2da33 & 1) == 0) {
    func_0x0249f8e4(&DAT_059deb60);
    func_0x0249f8e4(&DAT_059deb70);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e1498);
    func_0x0249f8e4(&DAT_059e2c00);
    func_0x0249f8e4(&DAT_05a27fb0);
    func_0x0249f8e4(&DAT_05a28018);
    func_0x0249f8e4(&DAT_05a27fa0);
    func_0x0249f8e4(&DAT_05a27fc8);
    func_0x0249f8e4(&DAT_05a27fd0);
    bRam0000000005e2da33 = 1;
  }
  puVar42 = (uint *)0x0;
  auStack_108._0_8_ = 0;
  auStack_108._8_8_ = 0;
  auStack_118._0_8_ = 0;
  auStack_118._8_8_ = 0;
  auStack_128._0_8_ = 0;
  auStack_128._8_8_ = 0;
  auStack_138._0_8_ = 0;
  auStack_138._8_8_ = 0;
  uVar33 = func_0x036fa5f8(lVar46,plVar47);
  if ((uVar33 & 1) != 0) {
    return (char *)0x0;
  }
  lVar34 = func_0x036d5e58(lVar46);
  auVar18._8_8_ = auStack_128._8_8_;
  auVar18._0_8_ = auStack_128._0_8_;
  auVar11._8_8_ = auStack_138._8_8_;
  auVar11._0_8_ = auStack_138._0_8_;
  auVar5._8_8_ = auStack_118._8_8_;
  auVar5._0_8_ = auStack_118._0_8_;
  auVar59._8_8_ = auStack_108._8_8_;
  auVar59._0_8_ = auStack_108._0_8_;
  puVar36 = (uint *)0x5e2d000;
  if ((lVar34 != 0) &&
     (auStack_108 = auVar59, auStack_118 = auVar5, auStack_138 = auVar11, auStack_128 = auVar18,
     *(long *)(lVar34 + 0x18) != 0)) {
    auStack_108 = func_0x03753e70(*(long *)(lVar34 + 0x18),0);
    unaff_x28 = (uint *)&DAT_05a27fc8;
    lVar34 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
      lVar34 = func_0x024d8f40();
    }
    pcVar35 = (char *)func_0x0249f90c(auStack_108,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar34 + 0xc0) + 8) + 0x80));
    if (*pcVar35 == '\0') {
      return (char *)0x0;
    }
    func_0x02886844(auStack_108,&puStack_148,_DAT_05a27fd0);
    puVar36 = puStack_148;
    unaff_x27 = &DAT_059e2c00;
    if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar32 = func_0x03530158(puVar36,0);
    puVar42 = (uint *)0x0;
    uVar33 = func_0x0352ff64(uVar32,puVar54);
    if ((uVar33 & 1) != 0) {
      return (char *)0x0;
    }
    if (plVar47 != (long *)0x0) {
      lVar34 = *plVar47;
      unaff_x26 = (uint *)&DAT_059df8e8;
      uVar33 = (ulong)*(ushort *)(lVar34 + 0x12e);
      if (uVar33 != 0) {
        piVar52 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
        do {
          if (*(long *)(piVar52 + -2) == _DAT_059df8e8) {
            puVar31 = (undefined8 *)(lVar34 + (long)(*piVar52 + 5) * 0x10 + 0x138);
            goto LAB_036dc294;
          }
          uVar33 = uVar33 - 1;
          piVar52 = piVar52 + 4;
        } while (uVar33 != 0);
      }
      puVar42 = (uint *)0x5;
      puVar31 = (undefined8 *)func_0x024d927c(plVar47);
LAB_036dc294:
      uVar32 = (*(code *)*puVar31)(plVar47,puVar31[1]);
      plVar48 = *(long **)(lVar46 + 0x10);
      if (plVar48 != (long *)0x0) {
        puVar42 = *(uint **)(*plVar48 + 0x1d0);
        plVar48 = (long *)(**(code **)(*plVar48 + 0x1c8))(plVar48,uVar32);
        if (plVar48 != (long *)0x0) {
          lVar34 = *plVar48;
          uVar33 = (ulong)*(ushort *)(lVar34 + 0x12e);
          if (uVar33 != 0) {
            piVar52 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
            do {
              if (*(long *)(piVar52 + -2) == _DAT_059dfbc0) {
                puVar31 = (undefined8 *)(lVar34 + (long)(*piVar52 + 3) * 0x10 + 0x138);
                goto LAB_036dc31c;
              }
              uVar33 = uVar33 - 1;
              piVar52 = piVar52 + 4;
            } while (uVar33 != 0);
          }
          puVar42 = (uint *)0x3;
          puVar31 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036dc31c:
          puVar36 = (uint *)(*(code *)*puVar31)(plVar48,puVar31[1]);
          lVar34 = func_0x036d5e58(lVar46);
          auVar19._8_8_ = auStack_128._8_8_;
          auVar19._0_8_ = auStack_128._0_8_;
          auVar12._8_8_ = auStack_138._8_8_;
          auVar12._0_8_ = auStack_138._0_8_;
          auVar6._8_8_ = auStack_118._8_8_;
          auVar6._0_8_ = auStack_118._0_8_;
          if ((lVar34 != 0) &&
             (auStack_118 = auVar6, auStack_138 = auVar12, auStack_128 = auVar19,
             *(long *)(lVar34 + 0x18) != 0)) {
            uVar29 = *(uint *)(*(long *)(lVar34 + 0x18) + 0x38);
            puVar57 = (uint *)(ulong)uVar29;
            if ((int)uVar29 < 1) {
              lVar34 = *plVar47;
              uVar33 = (ulong)*(ushort *)(lVar34 + 0x12e);
              if (uVar33 != 0) {
                piVar52 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar52 + -2) == _DAT_059df8e8) {
                    puVar31 = (undefined8 *)(lVar34 + (long)(*piVar52 + 5) * 0x10 + 0x138);
                    goto LAB_036dc49c;
                  }
                  uVar33 = uVar33 - 1;
                  piVar52 = piVar52 + 4;
                } while (uVar33 != 0);
              }
              puVar31 = (undefined8 *)func_0x024d927c(plVar47,_DAT_059df8e8,5);
LAB_036dc49c:
              uVar32 = (*(code *)*puVar31)(plVar47,puVar31[1]);
              puVar38 = (uint *)0x0;
              uVar33 = func_0x036f2f04(lVar46,uVar32);
              if ((uVar33 & 1) == 0) {
                puVar38 = (uint *)0x0;
                uVar33 = func_0x036f2fec(lVar46,plVar47);
                puVar42 = puVar38;
                if ((uVar33 & 1) != 0) goto LAB_036dc4d0;
LAB_036dc4f8:
                if (puVar36 != (uint *)0x0) {
                  puVar42 = puVar36;
                  puVar38 = (uint *)func_0x022bffa8(2,_DAT_059deb70);
                  lVar34 = func_0x036d5ec8(lVar46);
                  puVar57 = puVar38;
                  if (lVar34 != 0) {
                    auVar59 = func_0x037537dc(lVar34,0);
                    puVar37 = auVar59._0_8_;
                    if (puVar38 != (uint *)0x0) {
                      uVar51 = auVar59._8_8_ & 0xffffffff;
                      uVar33 = func_0x0240c1cc(0xd,_DAT_059deb60);
                      puVar57 = (uint *)(uVar33 & 0xffffffff);
                      goto LAB_036dc558;
                    }
                  }
                }
              }
              else {
LAB_036dc4d0:
                lVar34 = func_0x036d5e58(lVar46);
                auVar23._8_8_ = auStack_128._8_8_;
                auVar23._0_8_ = auStack_128._0_8_;
                auVar16._8_8_ = auStack_138._8_8_;
                auVar16._0_8_ = auStack_138._0_8_;
                auVar9._8_8_ = auStack_118._8_8_;
                auVar9._0_8_ = auStack_118._0_8_;
                puVar42 = puVar38;
                if ((lVar34 != 0) &&
                   (auStack_118 = auVar9, auStack_138 = auVar16, auStack_128 = auVar23,
                   *(long *)(lVar34 + 0x28) != 0)) {
                  if (*(int *)(*(long *)(lVar34 + 0x28) + 0x10) < 1) goto LAB_036dc4f8;
                  puVar57 = (uint *)0x0;
                  puVar37 = puVar45;
LAB_036dc558:
                  lVar34 = *plVar47;
                  uVar33 = (ulong)*(ushort *)(lVar34 + 0x12e);
                  if (uVar33 != 0) {
                    piVar52 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar52 + -2) == _DAT_059df8e8) {
                        puVar31 = (undefined8 *)(lVar34 + (long)(*piVar52 + 5) * 0x10 + 0x138);
                        puVar45 = puVar37;
                        goto LAB_036dc5a8;
                      }
                      uVar33 = uVar33 - 1;
                      piVar52 = piVar52 + 4;
                    } while (uVar33 != 0);
                  }
                  puVar38 = (uint *)0x5;
                  puVar31 = (undefined8 *)func_0x024d927c(plVar47);
                  puVar45 = puVar37;
LAB_036dc5a8:
                  uVar32 = (*(code *)*puVar31)(plVar47,puVar31[1]);
                  plVar48 = *(long **)(lVar46 + 0x10);
                  puVar42 = puVar38;
                  if (plVar48 != (long *)0x0) {
                    puVar42 = *(uint **)(*plVar48 + 0x1d0);
                    uVar32 = (**(code **)(*plVar48 + 0x1c8))(plVar48,uVar32);
                    if (*(int *)(_DAT_059e1498 + 0xe4) == 0) {
                      func_0x0249fa64(_DAT_059e1498);
                    }
                    uVar33 = func_0x036c47c0(uVar32,plVar47);
                    unaff_x26 = (uint *)(uVar33 & 0xffffffff);
                    lVar34 = func_0x036d5e58(lVar46);
                    auVar24._8_8_ = auStack_128._8_8_;
                    auVar24._0_8_ = auStack_128._0_8_;
                    auVar17._8_8_ = auStack_138._8_8_;
                    auVar17._0_8_ = auStack_138._0_8_;
                    auVar10._8_8_ = auStack_118._8_8_;
                    auVar10._0_8_ = auStack_118._0_8_;
                    if ((lVar34 != 0) &&
                       (auStack_118 = auVar10, auStack_138 = auVar17, auStack_128 = auVar24,
                       *(long *)(lVar34 + 0x28) != 0)) {
                      puVar45 = (uint *)0x0;
                      puVar42 = unaff_x26;
                      iVar28 = func_0x03700d78(*(long *)(lVar34 + 0x28),puVar57);
                      uVar29 = (int)puVar57 - iVar28;
                      puVar57 = (uint *)(ulong)uVar29;
                      if (uVar29 == 0) {
                        if (puVar36 != (uint *)0x0) {
                          puVar38 = (uint *)func_0x022bffa8(2,_DAT_059deb70);
                          puVar57 = (uint *)func_0x036d5ec8(lVar46);
                          puVar37 = (uint *)func_0x03530c84(puVar54,0);
                          puVar42 = puVar36;
                          puVar36 = puVar38;
                          if (puVar38 != (uint *)0x0) {
                            func_0x023ec3f8(5,_DAT_059deb60,puVar38,puVar57,plVar47);
                            func_0x037275b8(lVar46,puVar54,1,0);
                            func_0x03727828(lVar46,plVar47,puVar54,0);
                            puVar42 = (uint *)(ulong)((uint)puVar44 & 1);
                            puVar45 = (uint *)(ulong)((uint)uVar40 & 1);
                            uVar51 = 0;
                            uVar29 = func_0x036fa00c(lVar46,plVar47);
                            auVar58._8_4_ = uVar29;
                            auVar58._0_8_ = lVar46;
                            auVar58._12_4_ = 0;
                            lVar34 = func_0x036d5ec8(lVar46);
                            puVar43 = puVar37;
                            if (lVar34 != 0) {
                              auStack_138 = func_0x03753e70(lVar34,0);
                              uVar27 = func_0x022bf4f8(auStack_138,_DAT_05a27fc8);
                              uVar41 = auStack_138._8_8_;
                              uVar32 = auStack_138._0_8_;
                              if ((uVar29 & uVar27 & 1) == 0) {
                                uStack_f8 = func_0x03530c84(puVar54,0);
                                puStack_148 = (uint *)0x0;
                                puStack_140 = (uint *)0x0;
                                func_0x028866e4(&puStack_148,&uStack_f8,_DAT_05a27fa0);
                                uVar51 = 0;
                                puVar45 = puStack_140;
                                auVar61 = func_0x03489150(uVar32,uVar41,puStack_148);
                                puVar43 = puVar37;
                                uVar55 = uVar41;
                              }
                              else {
                                uStack_f8 = func_0x03530c84(puVar54,0);
                                puStack_148 = (uint *)0x0;
                                puStack_140 = (uint *)0x0;
                                func_0x028866e4(&puStack_148,&uStack_f8,_DAT_05a27fa0);
                                auVar61._8_8_ = puStack_140;
                                auVar61._0_8_ = puStack_148;
                                puVar43 = puVar37;
                              }
                              puVar54 = auVar61._0_8_;
                              lVar46 = func_0x036d5ec8(lVar46);
                              auStack_128 = auVar61;
                              uVar40 = func_0x022bf4f8(auStack_128,_DAT_05a27fc8);
                              if ((uVar40 & 1) == 0) {
                                puVar42 = (uint *)0x0;
                                puVar44 = (uint *)0x0;
                              }
                              else {
                                puVar54 = (uint *)func_0x023f3ca0(auStack_128,_DAT_05a27fb0);
                                if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                  func_0x0249fa64(_DAT_059e2c00);
                                }
                                uStack_f8 = func_0x03530158(puVar54,0);
                                puStack_148 = (uint *)0x0;
                                puStack_140 = (uint *)0x0;
                                func_0x028866e4(&puStack_148,&uStack_f8,_DAT_05a28018);
                                puVar44 = puStack_148;
                                puVar42 = puStack_140;
                              }
                              auVar25._8_8_ = 0;
                              auVar25._0_8_ = auVar61._8_8_;
                              auVar58 = auVar25 << 0x40;
                              if (lVar46 != 0) {
                                func_0x03753f18(lVar46,puVar44,puVar42,0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (iVar28 < 1) {
                          return (char *)0x0;
                        }
                        lVar46 = func_0x036d5ec8(lVar46);
                        if (lVar46 != 0) {
                          *(uint *)(lVar46 + 0x38) = uVar29;
                          return (char *)0x1;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar34 = func_0x036d5e58(lVar46);
              auVar20._8_8_ = auStack_128._8_8_;
              auVar20._0_8_ = auStack_128._0_8_;
              auVar13._8_8_ = auStack_138._8_8_;
              auVar13._0_8_ = auStack_138._0_8_;
              auVar7._8_8_ = auStack_118._8_8_;
              auVar7._0_8_ = auStack_118._0_8_;
              if ((lVar34 != 0) &&
                 (auStack_118 = auVar7, auStack_138 = auVar13, auStack_128 = auVar20,
                 puVar36 != (uint *)0x0)) {
                lVar49 = *(long *)puVar36;
                unaff_x26 = *(uint **)(lVar34 + 0x28);
                uVar33 = (ulong)*(ushort *)(lVar49 + 0x12e);
                if (uVar33 != 0) {
                  piVar52 = (int *)(*(long *)(lVar49 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar52 + -2) == _DAT_059deb70) {
                      puVar31 = (undefined8 *)(lVar49 + (long)(*piVar52 + 3) * 0x10 + 0x138);
                      goto LAB_036dc3f8;
                    }
                    uVar33 = uVar33 - 1;
                    piVar52 = piVar52 + 4;
                  } while (uVar33 != 0);
                }
                puVar42 = (uint *)0x3;
                puVar31 = (undefined8 *)func_0x024d927c(puVar36);
LAB_036dc3f8:
                uVar33 = (*(code *)*puVar31)(puVar36,puVar31[1]);
                if (unaff_x26 != (uint *)0x0) {
                  puVar42 = (uint *)(uVar33 & 0xffffffff);
                  puVar45 = (uint *)0x0;
                  uVar27 = func_0x03700d78(unaff_x26,puVar57);
                  if (uVar27 == uVar29) {
                    lVar34 = *(long *)puVar36;
                    uVar33 = (ulong)*(ushort *)(lVar34 + 0x12e);
                    if (uVar33 != 0) {
                      piVar52 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar52 + -2) == _DAT_059deb70) {
                          puVar31 = (undefined8 *)(lVar34 + (long)(*piVar52 + 2) * 0x10 + 0x138);
                          goto LAB_036dc760;
                        }
                        uVar33 = uVar33 - 1;
                        piVar52 = piVar52 + 4;
                      } while (uVar33 != 0);
                    }
                    puVar42 = (uint *)0x2;
                    puVar31 = (undefined8 *)func_0x024d927c(puVar36);
LAB_036dc760:
                    puVar36 = (uint *)(*(code *)*puVar31)(puVar36,puVar31[1]);
                    lVar34 = func_0x036d5e58(lVar46);
                    if (lVar34 != 0) {
                      puVar57 = *(uint **)(lVar34 + 0x18);
                      puVar38 = (uint *)func_0x03530c84(puVar54,0);
                      if (puVar36 != (uint *)0x0) {
                        lVar34 = *(long *)puVar36;
                        uVar51 = (ulong)*(ushort *)(lVar34 + 0x12e);
                        if (uVar51 != 0) {
                          piVar52 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar52 + -2) == _DAT_059deb60) {
                              puVar31 = (undefined8 *)(lVar34 + (long)(*piVar52 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_036dc7ec;
                            }
                            uVar51 = uVar51 - 1;
                            piVar52 = piVar52 + 4;
                          } while (uVar51 != 0);
                        }
                        puVar31 = (undefined8 *)func_0x024d927c(puVar36,_DAT_059deb60,5);
LAB_036dc7ec:
                        (*(code *)*puVar31)(puVar36,puVar57,plVar47,puVar38,puVar31[1]);
                        func_0x037275b8(lVar46,puVar54,1,0);
                        func_0x03727828(lVar46,plVar47,puVar54,0);
                        puVar42 = (uint *)(ulong)((uint)puVar44 & 1);
                        puVar45 = (uint *)(ulong)((uint)uVar40 & 1);
                        uVar51 = 0;
                        uVar29 = func_0x036fa00c(lVar46,plVar47);
                        auVar2._8_4_ = uVar29;
                        auVar2._0_8_ = lVar46;
                        auVar2._12_4_ = 0;
                        auVar58._8_4_ = uVar29;
                        auVar58._0_8_ = lVar46;
                        auVar58._12_4_ = 0;
                        lVar34 = func_0x036d5e58(lVar46);
                        auVar21._8_8_ = auStack_128._8_8_;
                        auVar21._0_8_ = auStack_128._0_8_;
                        auVar14._8_8_ = auStack_138._8_8_;
                        auVar14._0_8_ = auStack_138._0_8_;
                        auVar8._8_8_ = auStack_118._8_8_;
                        auVar8._0_8_ = auStack_118._0_8_;
                        unaff_x26 = puVar38;
                        if ((lVar34 != 0) &&
                           (auVar58 = auVar2, auStack_118 = auVar8, auStack_138 = auVar14,
                           auStack_128 = auVar21, *(long *)(lVar34 + 0x18) != 0)) {
                          auStack_118 = func_0x03753e70(*(long *)(lVar34 + 0x18),0);
                          lVar34 = *(long *)(_DAT_05a27fc8 + 0x20);
                          if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
                            lVar34 = func_0x024d8f40();
                          }
                          pcVar35 = (char *)func_0x0249f90c(auStack_118,
                                                            *(undefined8 *)
                                                             (*(long *)(*(long *)(lVar34 + 0xc0) + 8
                                                                       ) + 0x80));
                          uVar41 = auStack_118._8_8_;
                          uVar32 = auStack_118._0_8_;
                          if ((uVar29 & *pcVar35 != '\0') == 0) {
                            uStack_f8 = func_0x03530c84(puVar54,0);
                            puStack_148 = (uint *)0x0;
                            puStack_140 = (uint *)0x0;
                            func_0x028866e4(&puStack_148,&uStack_f8,_DAT_05a27fa0);
                            uVar51 = 0;
                            puVar42 = puStack_148;
                            puVar45 = puStack_140;
                            auVar60 = func_0x03489150(uVar32,uVar41);
                          }
                          else {
                            uStack_f8 = func_0x03530c84(puVar54,0);
                            puStack_148 = (uint *)0x0;
                            puStack_140 = (uint *)0x0;
                            puVar42 = _DAT_05a27fa0;
                            func_0x028866e4(&puStack_148,&uStack_f8);
                            auVar60._8_8_ = puStack_140;
                            auVar60._0_8_ = puStack_148;
                          }
                          uVar55 = auVar60._8_8_;
                          uVar32 = auVar60._0_8_;
                          auVar58._8_8_ = uVar32;
                          lVar34 = func_0x036d5e58(lVar46);
                          if (lVar34 != 0) {
                            puVar54 = *(uint **)(lVar34 + 0x18);
                            lVar34 = *(long *)(_DAT_05a27fc8 + 0x20);
                            auStack_128._0_8_ = uVar32;
                            auStack_128._8_8_ = uVar55;
                            if ((*(byte *)(lVar34 + 0x135) & 1) == 0) {
                              lVar34 = func_0x024d8f40();
                            }
                            pcVar35 = (char *)func_0x0249f90c(auStack_128,
                                                              *(undefined8 *)
                                                               (*(long *)(*(long *)(lVar34 + 0xc0) +
                                                                         8) + 0x80));
                            if (*pcVar35 == '\0') {
                              puVar42 = (uint *)0x0;
                              puVar44 = (uint *)0x0;
                            }
                            else {
                              uVar32 = func_0x023f3ca0(auStack_128,_DAT_05a27fb0);
                              if (*(int *)(_DAT_059e2c00 + 0xe4) == 0) {
                                func_0x0249fa64(_DAT_059e2c00);
                              }
                              uStack_f8 = func_0x03530158(uVar32,0);
                              puStack_148 = (uint *)0x0;
                              puStack_140 = (uint *)0x0;
                              func_0x028866e4(&puStack_148,&uStack_f8,_DAT_05a28018);
                              puVar44 = puStack_148;
                              puVar42 = puStack_140;
                            }
                            auVar4._8_8_ = uVar32;
                            auVar4._0_8_ = lVar46;
                            auVar3._8_8_ = uVar32;
                            auVar3._0_8_ = lVar46;
                            auVar58._8_8_ = uVar32;
                            if (puVar54 != (uint *)0x0) {
                              puVar45 = (uint *)0x0;
                              func_0x03753f18(puVar54,puVar44);
                              lVar46 = func_0x036d5e58(lVar46);
                              auVar22._8_8_ = auStack_128._8_8_;
                              auVar22._0_8_ = auStack_128._0_8_;
                              auVar15._8_8_ = auStack_138._8_8_;
                              auVar15._0_8_ = auStack_138._0_8_;
                              auVar58 = auVar3;
                              if ((lVar46 != 0) &&
                                 (auVar58 = auVar4, auStack_138 = auVar15, auStack_128 = auVar22,
                                 *(long *)(lVar46 + 0x18) != 0)) {
                                func_0x03754328(*(long *)(lVar46 + 0x18),0);
                                return (char *)0x1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    unaff_x26 = (uint *)(ulong)uVar27;
                    if ((int)uVar27 < 1) {
                      return (char *)0x0;
                    }
                    lVar46 = func_0x036d5ec8(lVar46);
                    if (lVar46 != 0) {
                      func_0x03754330(lVar46,unaff_x26,0);
                      return (char *)0x1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar41 = auVar58._8_8_;
  uVar32 = auVar58._0_8_;
  func_0x0249fb90();
  puStack_160 = (uint *)0x36dcaf8;
  lVar46 = func_0x036d5e58();
  if ((lVar46 != 0) && (lVar46 = *(long *)(lVar46 + 0x18), lVar46 != 0)) {
    uStack_180 = puStack_160;
    puStack_170 = (uint *)uVar55;
    puStack_160 = puVar54;
    if ((bRam0000000005e2de5c & 1) == 0) {
      uStack_168 = uVar41;
      uStack_158 = uVar32;
      func_0x0249f8e4(&DAT_059e2ba0,0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      auVar58._8_8_ = uStack_168;
      auVar58._0_8_ = uStack_158;
      bRam0000000005e2de5c = 1;
    }
    uStack_168 = auVar58._8_8_;
    uStack_158 = auVar58._0_8_;
    lVar34 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
      lVar34 = func_0x024d8f40();
      auVar58._8_8_ = uStack_168;
      auVar58._0_8_ = uStack_158;
    }
    uStack_168 = auVar58._8_8_;
    uStack_158 = auVar58._0_8_;
    pcVar35 = (char *)func_0x0249f90c(lVar46 + 0x50,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar34 + 0xc0) + 8) + 0x80));
    if (*pcVar35 != '\0') {
      func_0x02886844(lVar46 + 0x50,&pcStack_178,_DAT_05a27fd0);
      pcVar35 = pcStack_178;
      uVar32 = *(undefined8 *)(lVar46 + 0x28);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar40 = func_0x0430deb0(pcVar35,uVar32,0);
      if ((uVar40 & 1) != 0) {
        func_0x02886844(lVar46 + 0x50,&pcStack_178,_DAT_05a27fd0);
        return pcStack_178;
      }
    }
    return *(char **)(lVar46 + 0x28);
  }
  auVar58 = func_0x0249fb90();
  pcStack_178 = auVar58._8_8_;
  uVar53 = auVar58._0_8_;
  uStack_180 = 0x36dcb1c;
  puStack_170 = puVar54;
  uStack_168 = uVar32;
  if ((bRam0000000005e2da34 & 1) == 0) {
    func_0x0249f8e4(&DAT_059e2be8);
    bRam0000000005e2da34 = 1;
  }
  lVar46 = func_0x036d5e58(uVar53);
  if (lVar46 != 0) {
    lVar46 = *(long *)(lVar46 + 0x18);
    if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
      func_0x0249fa64(_DAT_059e2be8);
    }
    uVar32 = func_0x0352eeec(&pcStack_178,0);
    uVar53 = 0;
    if (lVar46 != 0) {
      pcVar35 = (char *)func_0x03753bf0(lVar46,uVar32,0);
      return pcVar35;
    }
  }
  func_0x0249fb90();
  uStack_190 = 0x36dcba8;
  uStack_188 = uVar53;
  lVar46 = func_0x036d5e58();
  if ((lVar46 != 0) && (lVar46 = *(long *)(lVar46 + 0x18), lVar46 != 0)) {
    puStack_1c0 = (uint *)uStack_190;
    uStack_190 = 0x5e2d000;
    puStack_1d0 = extraout_x1;
    puStack_1b8 = puVar57;
    puStack_1b0 = puVar36;
    uStack_1a8 = uVar56;
    uStack_1a0 = uVar55;
    puStack_198 = (uint *)uVar41;
    if ((bRam0000000005e2de63 & 1) == 0) {
      func_0x0249f8e4(&DAT_059e2ba0,extraout_x1,0);
      func_0x0249f8e4(&DAT_059e2be8);
      func_0x0249f8e4(&DAT_05a27fb0);
      func_0x0249f8e4(&DAT_05a27fa0);
      func_0x0249f8e4(&DAT_05a27fc8);
      func_0x0249f8e4(&DAT_05a27fd0);
      bRam0000000005e2de63 = 1;
    }
    puStack_1e0 = (uint *)0x0;
    puStack_1d8 = (uint *)0x0;
    uVar40 = func_0x0375309c(lVar46);
    if ((uVar40 & 1) != 0) {
      puStack_1d8 = *(uint **)(lVar46 + 0x68);
      puStack_1e0 = *(uint **)(lVar46 + 0x60);
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar32 = func_0x0352eeec(&puStack_1d0,0);
      lVar34 = *(long *)(_DAT_05a27fc8 + 0x20);
      if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
        lVar34 = func_0x024d8f40(lVar34);
      }
      pcVar35 = (char *)func_0x0249f90c(&puStack_1e0,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar34 + 0xc0) + 8) + 0x80));
      lVar34 = _DAT_05a27fb0;
      if (*pcVar35 == '\0') {
        puVar57 = (uint *)0x0;
        puVar54 = (uint *)0x0;
      }
      else {
        lVar50 = *(long *)(_DAT_05a27fb0 + 0x20);
        uVar1 = *(ushort *)(lVar50 + 0x135);
        lVar49 = lVar50;
        if ((uVar1 & 1) == 0) {
          lVar50 = func_0x024d8f40(lVar50);
          uVar1 = *(ushort *)(*(long *)(lVar34 + 0x20) + 0x135);
          lVar49 = *(long *)(lVar34 + 0x20);
        }
        uVar30 = *(undefined4 *)(**(long **)(lVar50 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar49 = func_0x024d8f40(lVar49);
        }
        uVar41 = func_0x0249f90c(&puStack_1e0,
                                 *(long *)(*(long *)(*(long *)(lVar49 + 0xc0) + 8) + 0x80) + 0x20);
        func_0x054ed0d0(&puStack_1f0,uVar41,uVar30);
        if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
          func_0x0249fa64();
        }
        puStack_1c8 = (uint *)func_0x0430d994(puStack_1f0,uVar32,0);
        puStack_1f0 = (uint *)0x0;
        puStack_1e8 = (uint *)0x0;
        func_0x028866e4(&puStack_1f0,&puStack_1c8,_DAT_05a27fa0);
        puVar57 = puStack_1f0;
        puVar54 = puStack_1e8;
      }
      *(uint **)(lVar46 + 0x68) = puVar54;
      *(uint **)(lVar46 + 0x60) = puVar57;
    }
    lVar34 = *(long *)(_DAT_05a27fc8 + 0x20);
    if ((*(ushort *)(lVar34 + 0x135) & 1) == 0) {
      lVar34 = func_0x024d8f40();
    }
    pcVar35 = (char *)func_0x0249f90c(lVar46 + 0x18,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar34 + 0xc0) + 8) + 0x80));
    if (*pcVar35 != '\0') {
      func_0x02886844(lVar46 + 0x18,&puStack_1f0,_DAT_05a27fd0);
      puVar57 = puStack_1f0;
      if (*(int *)(_DAT_059e2be8 + 0xe4) == 0) {
        func_0x0249fa64();
      }
      uVar32 = func_0x0352eeec(&puStack_1d0,0);
      if (*(int *)(_DAT_059e2ba0 + 0xe4) == 0) {
        func_0x0249fa64(_DAT_059e2ba0);
      }
      puStack_1c8 = (uint *)func_0x0430d994(puVar57,uVar32,0);
      puStack_1f0 = (uint *)0x0;
      puStack_1e8 = (uint *)0x0;
      pcVar35 = (char *)func_0x028866e4(&puStack_1f0,&puStack_1c8,_DAT_05a27fa0);
      *(uint **)(lVar46 + 0x20) = puStack_1e8;
      *(uint **)(lVar46 + 0x18) = puStack_1f0;
    }
    return pcVar35;
  }
  auVar58 = func_0x0249fb90();
  plVar47 = auVar58._8_8_;
  lVar46 = auVar58._0_8_;
  puStack_1f0 = (uint *)0x36dcbd4;
  uStack_1a0 = 0x5e2d000;
  puVar44 = puVar42;
  puVar54 = puVar45;
  uVar40 = uVar51;
  puVar38 = puVar43;
  puStack_1e0 = unaff_x28;
  puStack_1d8 = (uint *)unaff_x27;
  puStack_1d0 = unaff_x26;
  puStack_1c8 = puVar57;
  puStack_1c0 = puVar36;
  puStack_1b8 = (uint *)uVar56;
  puStack_1b0 = (uint *)uVar55;
  uStack_1a8 = uVar41;
  puStack_198 = extraout_x1;
  if ((bRam0000000005e2da35 & 1) == 0) {
    func_0x0249f8e4(&DAT_059defb8);
    func_0x0249f8e4(&DAT_059df8e8);
    func_0x0249f8e4(&DAT_059dfbc0);
    func_0x0249f8e4(&DAT_059e0150);
    func_0x0249f8e4(&DAT_05a29e48);
    func_0x0249f8e4(&DAT_059d4248);
    bRam0000000005e2da35 = 1;
  }
  if (plVar47 != (long *)0x0) {
    lVar34 = *plVar47;
    uVar55 = (ulong)*(ushort *)(lVar34 + 0x12e);
    if (uVar55 != 0) {
      piVar52 = (int *)(*(long *)(lVar34 + 0xb0) + 8);
      do {
        if (*(long *)(piVar52 + -2) == _DAT_059df8e8) {
          puVar31 = (undefined8 *)(lVar34 + (long)(*piVar52 + 5) * 0x10 + 0x138);
          goto LAB_036dccc4;
        }
        uVar55 = uVar55 - 1;
        piVar52 = piVar52 + 4;
      } while (uVar55 != 0);
    }
    puVar44 = (uint *)0x5;
    puVar31 = (undefined8 *)func_0x024d927c(plVar47);
LAB_036dccc4:
    uVar32 = (*(code *)*puVar31)(plVar47,puVar31[1]);
    plVar48 = *(long **)(lVar46 + 0x10);
    if (plVar48 != (long *)0x0) {
      plVar48 = (long *)(**(code **)(*plVar48 + 0x1c8))
                                  (plVar48,uVar32,*(undefined8 *)(*plVar48 + 0x1d0));
      pcVar35 = (char *)0x0;
      if (plVar48 != (long *)0x0) {
        puVar44 = (uint *)0x0;
        uVar55 = func_0x036edd98(lVar46,uVar32);
        if ((uVar55 & 1) != 0) {
          lVar46 = *plVar48;
          uVar55 = (ulong)*(ushort *)(lVar46 + 0x12e);
          if (uVar55 != 0) {
            piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
            do {
              if (*(long *)(piVar52 + -2) == _DAT_059dfbc0) {
                puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 0x19) * 0x10 + 0x138);
                goto LAB_036dce14;
              }
              uVar55 = uVar55 - 1;
              piVar52 = piVar52 + 4;
            } while (uVar55 != 0);
          }
          puVar44 = (uint *)0x19;
          puVar31 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036dce14:
          plVar39 = (long *)(*(code *)*puVar31)(plVar48,puVar31[1]);
          if (plVar39 != (long *)0x0) {
            lVar46 = *plVar39;
            uVar55 = (ulong)*(ushort *)(lVar46 + 0x12e);
            if (uVar55 != 0) {
              piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
              do {
                if (*(long *)(piVar52 + -2) == _DAT_059e0150) {
                  puVar31 = (undefined8 *)(lVar46 + (long)*piVar52 * 0x10 + 0x138);
                  goto LAB_036dce7c;
                }
                uVar55 = uVar55 - 1;
                piVar52 = piVar52 + 4;
              } while (uVar55 != 0);
            }
            puVar44 = (uint *)0x0;
            puVar31 = (undefined8 *)func_0x024d927c(plVar39);
LAB_036dce7c:
            uVar55 = (*(code *)*puVar31)(plVar39,puVar31[1]);
            if ((uVar55 & 1) == 0) {
LAB_036dcf40:
              lVar46 = *plVar48;
              uVar40 = (ulong)*(ushort *)(lVar46 + 0x12e);
              if (uVar40 != 0) {
                piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar52 + -2) == _DAT_059dfbc0) {
                    puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 3) * 0x10 + 0x138);
                    goto LAB_036dcf90;
                  }
                  uVar40 = uVar40 - 1;
                  piVar52 = piVar52 + 4;
                } while (uVar40 != 0);
              }
              puVar31 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059dfbc0,3);
LAB_036dcf90:
              plVar48 = (long *)(*(code *)*puVar31)(plVar48,puVar31[1]);
              puStack_1d0 = puStack_1f0;
              if ((bRam0000000005e2de50 & 1) == 0) {
                func_0x0249f8e4(&DAT_059deb70);
                func_0x0249f8e4(&DAT_05a29e48);
                func_0x0249f8e4(&DAT_059d4248);
                bRam0000000005e2de50 = 1;
              }
              if (plVar48 == (long *)0x0) {
                lVar46 = func_0x0249fb90();
                return *(char **)(lVar46 + 0x10);
              }
              lVar46 = *plVar48;
              uVar40 = (ulong)*(ushort *)(lVar46 + 0x12e);
              if (uVar40 != 0) {
                piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar52 + -2) == _DAT_059deb70) {
                    puVar31 = (undefined8 *)(lVar46 + (long)*piVar52 * 0x10 + 0x138);
                    goto LAB_03751b38;
                  }
                  uVar40 = uVar40 - 1;
                  piVar52 = piVar52 + 4;
                } while (uVar40 != 0);
              }
              puVar31 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059deb70,0);
LAB_03751b38:
              uVar32 = (*(code *)*puVar31)(plVar48,puVar31[1]);
              if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
                func_0x0249fa64(_DAT_059d4248);
              }
              puStack_1e0 = puVar42;
              puStack_1d8 = puVar45;
              func_0x0288f218(&puStack_1e0,&puStack_1f8,_DAT_05a29e48);
              puStack_208 = puStack_1f0;
              puStack_210 = puStack_1f8;
              puStack_200 = puStack_1e8;
              pcVar35 = (char *)func_0x0371f1bc(uVar32,plVar47,&puStack_210,param_7,0);
              return pcVar35;
            }
            if (puVar42 != (uint *)0x0) {
              lVar46 = *(long *)puVar42;
              uVar55 = (ulong)*(ushort *)(lVar46 + 0x12e);
              if (uVar55 != 0) {
                piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar52 + -2) == _DAT_059defb8) {
                    puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 0xb) * 0x10 + 0x138);
                    goto LAB_036dcee8;
                  }
                  uVar55 = uVar55 - 1;
                  piVar52 = piVar52 + 4;
                } while (uVar55 != 0);
              }
              puVar31 = (undefined8 *)func_0x024d927c(puVar42,_DAT_059defb8,0xb);
LAB_036dcee8:
              puVar54 = (uint *)puVar31[1];
              uVar51 = (*(code *)*puVar31)(puVar42,uVar51);
              if ((uVar51 & 1) == 0) goto LAB_036dcf40;
              lVar46 = *plVar48;
              uVar51 = (ulong)*(ushort *)(lVar46 + 0x12e);
              if (uVar51 != 0) {
                piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar52 + -2) == _DAT_059dfbc0) {
                    puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 0x19) * 0x10 + 0x138);
                    puVar44 = puVar43;
                    goto LAB_036dcfe0;
                  }
                  uVar51 = uVar51 - 1;
                  piVar52 = piVar52 + 4;
                } while (uVar51 != 0);
              }
              puVar44 = (uint *)0x19;
              puVar31 = (undefined8 *)func_0x024d927c(plVar48);
LAB_036dcfe0:
              plVar48 = (long *)(*(code *)*puVar31)(plVar48,puVar31[1]);
              if (plVar48 != (long *)0x0) {
                lVar46 = *plVar48;
                uVar40 = (ulong)*(ushort *)(lVar46 + 0x12e);
                if (uVar40 != 0) {
                  piVar52 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar52 + -2) == _DAT_059e0150) {
                      puVar31 = (undefined8 *)(lVar46 + (long)(*piVar52 + 1) * 0x10 + 0x138);
                      goto LAB_036dd044;
                    }
                    uVar40 = uVar40 - 1;
                    piVar52 = piVar52 + 4;
                  } while (uVar40 != 0);
                }
                puVar31 = (undefined8 *)func_0x024d927c(plVar48,_DAT_059e0150,1);
LAB_036dd044:
                    /* WARNING: Could not recover jumptable at 0x036dd078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pcVar35 = (char *)(*(code *)*puVar31)(plVar48,plVar47,puVar42,puVar45,param_7,
                                                      puVar31[1]);
                return pcVar35;
              }
            }
          }
          goto LAB_036dd07c;
        }
        puVar44 = (uint *)0x0;
        uVar51 = func_0x036edf9c(lVar46,uVar32);
        pcVar35 = (char *)0x0;
        if ((uVar51 & 1) != 0) {
          lVar46 = func_0x036d5e58(lVar46);
          if ((lVar46 == 0) || (*(long *)(lVar46 + 0xa8) == 0)) goto LAB_036dd07c;
          uVar32 = *(undefined8 *)(*(long *)(lVar46 + 0xa8) + 0x10);
          if (*(int *)(_DAT_059d4248 + 0xe4) == 0) {
            func_0x0249fa64();
          }
          puStack_200 = puVar42;
          puStack_1f8 = puVar45;
          func_0x0288f218(&puStack_200,&uStack_218,_DAT_05a29e48);
          puStack_228 = puStack_210;
          uStack_230 = uStack_218;
          uStack_220 = puStack_208;
          pcVar35 = (char *)func_0x0371f1bc(uVar32,plVar47,&uStack_230,param_7,0);
        }
      }
      return pcVar35;
    }
  }
LAB_036dd07c:
  auVar58 = func_0x0249fb90();
  if ((bRam0000000005e2da36 & 1) == 0) {
    func_0x0249f8e4(&DAT_059eff98);
    bRam0000000005e2da36 = 1;
  }
  pcVar35 = (char *)func_0x0249fb80(_DAT_059eff98);
  func_0x045ecdec(pcVar35,0);
  pcVar35[0x10] = -2;
  pcVar35[0x11] = -1;
  pcVar35[0x12] = -1;
  pcVar35[0x13] = -1;
  uVar30 = func_0x045f0b1c(0);
  *(undefined4 *)(pcVar35 + 0x20) = uVar30;
  *(long *)(pcVar35 + 0x28) = auVar58._0_8_;
  func_0x0249f888(pcVar35 + 0x28,auVar58._0_8_);
  *(long *)(pcVar35 + 0x78) = auVar58._8_8_;
  func_0x0249f888(pcVar35 + 0x78,auVar58._8_8_);
  *(uint **)(pcVar35 + 0x38) = puVar44;
  func_0x0249f888(pcVar35 + 0x38,puVar44);
  *(uint **)(pcVar35 + 0x68) = puVar54;
  *(ulong *)(pcVar35 + 0x50) = uVar40;
  *(uint **)(pcVar35 + 0x58) = puVar38;
  func_0x0249f888(pcVar35 + 0x50,0);
  return pcVar35;
}

