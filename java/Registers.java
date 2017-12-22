import java.util.HashMap;
import java.util.Set;

public class Registers {
    private HashMap<char, int> _store;

    // ---------------------------------------------------------

    public Registers() {
        this._store = new HashMap<char, int>();
    }

    public Registers( HashMap<char, int> copy_from ) {
        this._store = new HashMap<char, int>( copy_from );
    }

    public Registers( Regsiters copy_from ) {
        this._store = new HashMap<char, int>( copy_from._store );
    }

    // ---------------------------------------------------------

    public void addRegister( char id ) {
        (this._store).put( id, 0 );
    }

    public void setRegister( char id, int val ) {
        (this._store).put( id, val );
    }

    // ---------------------------------------------------------

    public HashMap<char,int> getStore() {
        return new HashMap<char, int>( this._store );
    }

    public Set<char> getRegisters() {
        return new Set<char>( (this._store).keySet() );
    }

    public int getValue( char id ) {
        return (this._store).getOrDefault( id, 0 );
    }

    // ---------------------------------------------------------

    public int countRegisters() {
        return (this._store).size();
    }

    public void clearRegisters() {
        (this._store).clear()
    }

}
